class Solution:
    def reverseWords(self, s: str) -> str:
        new_string = s.strip()
        print("new string", new_string)
        new_string_2 = new_string.split(" ")
        print(new_string_2)
        reversed_list = new_string_2[::-1]
        new_reversed_list = [x for x in reversed_list if x != ""]
        print(new_reversed_list)
        result = " ".join(new_reversed_list)
        print(result)
        return result


s = Solution()
s.reverseWords("the sky is blue")