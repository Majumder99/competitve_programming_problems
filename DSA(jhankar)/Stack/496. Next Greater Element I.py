class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        result = []
        for num in nums1:
            indexOfNums2 = nums2.index(num)
            counter = 0
            for i in range(indexOfNums2+1, len(nums2)):
                if nums2[i] > num:
                    counter  = nums2[i]
                    break
            if counter == 0:
                result.append(-1)
            else:
                result.append(counter)
        return result