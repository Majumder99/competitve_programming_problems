class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        C = []
        if A[0] == B[0]:
            C.append(1)
        else: 
            C.append(0)
        

        for i in range(1, len(A)):
            a = sorted(A[0:i+1])
            b = sorted(B[0:i+1])
            counter = 0
            print(a)
            print(b)
            print(counter)
            for j in range(len(a)):
                if a[j] == b[j]:
                    counter += 1
            C.append(counter)
        return C

s = Solution()
s.findThePrefixCommonArray([1,3,2,4], [3,1,2,4])