class Solution:
    def firstUniqChar(self, s: str) -> int:
        stringDict = {}

        for i in range(len(s)):
            if s[i] not in stringDict:
                stringDict[s[i]] = 1
            else:
                stringDict[s[i]] += 1
        flag = 1
        indexOfChar = 0
        for key in stringDict:
            if stringDict[key] == 1:
                indexOfChar = s.index(key)
                flag = 0
                break
        if flag == 1:
            return -1
        else: 
            return indexOfChar


s = Solution()
s.firstUniqChar("leetcode")