class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        res = 0

        for char in columnTitle: 
            cost = ord(char) - ord('A') + 1
            res = res * 26 + cost
        return res