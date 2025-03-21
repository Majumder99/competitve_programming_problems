class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        result = []
        for i in range(len(nums)):
            if nums[i] not in result:
                result.append(nums[i])

        for i in range(len(result)):
            nums[i] = result[i]
        return len(result)