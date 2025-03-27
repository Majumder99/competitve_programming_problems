class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        str_new = s.split(" ")
        result = 0
        for i in range(len(str_new)-1, -1, -1):
            if str_new[i] != "":
                result = len(str_new[i])
                break
        print(result)

s = Solution()
s.lengthOfLastWord("Hello World")