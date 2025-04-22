# Josephus Problem
class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        winner = 0
        for i in range(1, n+1):
            # this is the elimination logic
            winner = (k+winner)%i
            # print(winner+1)
        return winner+1


s = Solution()
s.findTheWinner(5,2)