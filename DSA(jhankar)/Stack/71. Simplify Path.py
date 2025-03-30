class Solution:
    def simplifyPath(self, path: str) -> str:
        components = path.split("/")
        result = []
        for part in components:
            if part == "" or part == ".":
                continue
            elif part == "..":
                if result:
                    result.pop()
            else:
                result.append(part)
        answer = "/" + "/".join(result)
        print(answer)
s = Solution()
s.simplifyPath("/home//foo/")
