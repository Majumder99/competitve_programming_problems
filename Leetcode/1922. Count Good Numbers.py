class Solution:
    def countGoodNumbers(self, n: int) -> int:
        MOD = 10**9 + 7
        even_count = (n + 1) // 2 
        odd_count = n // 2       
        
        even_number = self.binpow(5, even_count, MOD)
        odd_number = self.binpow(4, odd_count, MOD)
        
        good_numbers = (even_number * odd_number) % MOD
        return good_numbers

    def binpow(self, a: int, b: int, mod: int) -> int:
        if b == 0:
            return 1
        res = self.binpow(a, b // 2, mod)
        res = (res * res) % mod
        if b % 2:
            res = (res * a) % mod
        return res

