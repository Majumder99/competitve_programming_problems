class Solution:
    def continuousSubarrays(self, nums: List[int]) -> int:
        start = 0
        result = 0

        for end in range(len(nums)):
            while max(nums[start:end+1]) - min(nums[start:end+1]) > 2:
                start += 1
            result += (end - start + 1)
        return result

s = Solution()
s.continuousSubarrays([5,4,2,4])