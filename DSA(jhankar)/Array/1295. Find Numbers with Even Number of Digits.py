class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        def findDigits(num):
            return len(str(num))
        
        count = 0
        for i in range(len(nums)):
            result = findDigits(nums[i])
            if result % 2 == 0:
                count += 1
        return count