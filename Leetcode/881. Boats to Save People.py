class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        if len(people) == 0:
            return 0
    
        people.sort()
        boat = 0
        firstpointer = 0
        secondpointer = len(people) - 1
        while firstpointer <= secondpointer:
            if people[firstpointer] + people[secondpointer] <= limit:
                firstpointer += 1
            secondpointer -= 1
            boat += 1
        return boat
        