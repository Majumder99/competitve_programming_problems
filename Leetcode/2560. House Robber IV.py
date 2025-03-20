class Solution:
    def minCapability(self, nums: List[int], k: int) -> int:
        count = 0
        i = 0
        while i < len(nums):
            max_house = 0
            for j in range(i,len(nums) - 1):
                max_house = max(nums[j], nums[j+2])
            

