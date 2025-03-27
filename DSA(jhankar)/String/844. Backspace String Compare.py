class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        result_1 = []
        result_2 = []

        for i in range(len(s)):
            if s[i] == "#":
                result_1.pop()
            else:
                result_1.append(s[i])

        for i in range(len(t)):
            if t[i] == "#":
                result_2.pop()
            else:
                result_2.append(t[i])
        
        final_1 = "".join(result_1)
        final_2 = "".join(result_2)

        if final_1 == final_2:
            return True
        else:
            return False
            