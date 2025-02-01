class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for i in s:
            if i == '(' or i == '[' or i == '{':
                stack.append(i)
            elif i == ")" or i == "]" or i == "}":
                if not stack: 
                    return False
                # stack[-1] = top element of stack
                # top element of queue = queue[0]
                if i == ")" and stack[-1] == "(" or i == "]" and stack[-1] == "[" or i == "}" and stack[-1] == "{":
                    stack.pop()
                else:
                    return False
        return not stack