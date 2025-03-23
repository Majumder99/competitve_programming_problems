class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        boxes_with_balls = []
        for i in range(len(boxes)):
            if boxes[i] == "1":
                boxes_with_balls.append(i)
        result = []
        for i in range(len(boxes)):
            sum = 0
            for num in boxes_with_balls:
                sum += abs(i - num)
            result.append(sum)
        return result


s = Solution()
s.minOperations("001011")