class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        answer = [0, 0]
        for student in students:
            answer[student] += 1

        sandwichesLen = len(sandwiches)
        for sandwich in sandwiches:
            if answer[sandwich] == 0:
                break
            if sandwichesLen == 0:
                break
            answer[sandwich] -= 1
            sandwichesLen -= 1
        return sandwichesLen


s = Solution()
s.countStudents([1,1,0,0], [0,1,0,1])