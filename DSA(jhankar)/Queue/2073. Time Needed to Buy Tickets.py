class Solution:
    def timeRequiredToBuy(self, tickets: list[int], k: int) -> int:
        answers = 0

        for i,_ in enumerate(tickets):
            if i <= k:
                answers += min(tickets[i], tickets[k])
            else:
                answers += min(tickets[i], tickets[k] - 1)
        return answers
        
s = Solution()
s.timeRequiredToBuy([5,1,1,1], 0)