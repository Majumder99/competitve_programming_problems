class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        products.sort()
        res = []
        prefix =""
        
        def binary_search(arr, target):
            left, right = 0, len(arr)-1
            while left <= right:
                mid = (left+right)//2
                if arr[mid] < target:
                    left = mid+1
                else:
                    right = mid-1
            return left
        
        for c in searchWord:
            prefix += c
            index = binary_search(products, prefix)
            suggestions = []
            for i in range(index, min(index + 3, len(products))):
                if products[i].startswith(prefix):
                    suggestions.append(products[i])
                else:
                    break
            res.append(suggestions)
        return res