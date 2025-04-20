from collections import deque


class Solution:
    def deckRevealedIncreasing(self, deck: List[int]) -> List[int]:
        deck.sort()

        n = len(deck)
        result = [0]*n
        indices = deque(range(n))
        for card in deck:
            i = indices.popleft()
            result[i] = card
            if indices:
                indices.append(indices.popleft())
        return result

s = Solution()
s.deckRevealedIncreasing([17,13,11,2,3,5,7])