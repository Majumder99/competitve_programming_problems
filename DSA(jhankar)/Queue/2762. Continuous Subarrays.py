from collections import deque
class Solution:
    def continuousSubarrays(self, nums: List[int]) -> int:
        start = 0
        result = 0
        max_deque = deque()
        min_deque = deque()

        for end in range(len(nums)):
            while max_deque and nums[max_deque[-1]] <= nums[end]:
                max_deque.pop()
            max_deque.append(end)

            while min_deque and nums[min_deque[-1]] >= nums[end]:
                min_deque.pop()
            min_deque.append(end)

            while nums[max_deque[0]] - nums[min_deque[0]] > 2:
                start += 1 
                if max_deque[0] < start:
                    max_deque.popleft()
                if min_deque[0] < start:
                    min_deque.popleft()
            result += (end - start + 1)
        return result

s = Solution()
s.continuousSubarrays([5,4,2,4])