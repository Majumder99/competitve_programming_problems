class Solution:
    def interpret(self, command: str) -> str:
        new_str = command.replace("(al)", "al")
        new_string_2 = new_str.replace("()", "o")
        return new_string_2


s = Solution()
s.interpret("(al)G(al)()()G")