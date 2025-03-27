class Solution:
    def reverseString(self, s: list[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        a = []
        for i in range(len(s)-1, -1, -1):
            a.append(s[i])
        s[:] = a[:]
            


s = Solution()
s.reverseString(["h","e","l","l","o"])