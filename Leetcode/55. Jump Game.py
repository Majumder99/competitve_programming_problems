class Solution:
    def canJump(self, nums: List[int]) -> bool:
        far_distance = 0
        array_length = len(nums)
        for i in range(array_length):
            if i > far_distance:
                return False
            
            far_distance = max(far_distance, i + nums[i])
            
            if far_distance > array_length - 1:
                return True
        return False