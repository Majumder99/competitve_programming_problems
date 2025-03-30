class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        result = [0] * len(temperatures)  
        stack = [] 

        for i, temp in enumerate(temperatures):
            while stack and temperatures[stack[-1]] < temp:
                idx = stack.pop()
                result[idx] = i - idx
            stack.append(i)

        return result

# Example usage
s = Solution()
print(s.dailyTemperatures([73,74,75,71,69,72,76,73]))  # Output: [1, 1, 4, 2, 1, 1, 0, 0]
