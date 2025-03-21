class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        first_string = strs[0]
        first_string_length = len(first_string)

        for s in strs[1:]:
            while first_string != s[0:first_string_length]:
                first_string_length -= 1
                if first_string_length == 0:
                    return ""
                first_string = first_string[0:first_string_length]
        
        return first_string