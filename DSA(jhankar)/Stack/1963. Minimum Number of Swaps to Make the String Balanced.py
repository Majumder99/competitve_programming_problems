class Solution:
    def minSwaps(self, s: str) -> int:
        counter = 0
        for i in s:
            if i == "[":
                counter += 1
            elif counter > 0:
                counter -= 1
        return (counter + 1) // 2
