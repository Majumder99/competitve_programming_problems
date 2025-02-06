class Solution:
    def sumFourDivisors(self, nums: List[int]) -> int:
        def get_divisors(n):
            divisors = set()
            for i in range(1, int(n**0.5)+1):
                if n % i == 0 and i not in divisors:
                    divisors.add(i)
                    divisors.add(n//i)
        
            return divisors

        for i in range(len(nums)):
            divisors = get_divisors(nums[i])
            if len(divisors) != 4:
                nums[i] = 0
            else:
                nums[i] = sum(divisors)
                
        return sum(nums)