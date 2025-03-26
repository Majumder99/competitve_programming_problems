class Solution:
    def defangIPaddr(self, address: str) -> str:
        newString = ""

        for i in range(len(address)):
            if address[i] == ".":
                newString += "[.]"
            else:
                newString += address[i]
        return newString



s = Solution()
print(s.defangIPaddr("1.1.1.1"))