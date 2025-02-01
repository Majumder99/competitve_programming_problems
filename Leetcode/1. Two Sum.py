class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = []
        for i in range(len(nums) - 1):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    d.append(i)
                    d.append(j)
                    return d