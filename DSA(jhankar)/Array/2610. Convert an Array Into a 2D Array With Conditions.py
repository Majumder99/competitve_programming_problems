class Solution:
    def findMatrix(self, nums: list[int]) -> list[list[int]]:
        final_output = []
        while len(nums) > 0:
            row = []
            for num in nums[:]:
                if num not in row:
                    row.append(num)
                    nums.remove(num)
            final_output.append(row)
        return final_output

s = Solution()
s.findMatrix([1,3,4,1,2,3,1])