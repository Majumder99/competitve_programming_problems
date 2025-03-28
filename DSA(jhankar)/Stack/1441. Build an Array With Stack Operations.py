class Solution:
    def buildArray(self, target: list[int], n: int) -> list[str]:
        ans = []
        current = 1

        for num in target:
            while current < num:
                ans.append("Push")
                ans.append("Pop")
                current += 1
            ans.append("Push")
            current += 1
        return ans

s = Solution()
s.buildArray([1,3], 3)