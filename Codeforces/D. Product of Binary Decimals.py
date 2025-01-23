import sys
sys.setrecursionlimit(10**7)

MAX = 100_007
binary_decimals = []

for i in range(2, MAX):
    curr = i
    bad = False
    while curr > 0:
        if (curr % 10) > 1:
            bad = True
            break
        curr //= 10
    if not bad:
        binary_decimals.append(i)

binary_decimals.sort()

memo = {}

def ok(n):
    if n == 1:
        return True
    if n in memo:
        return memo[n]
    
    for i in binary_decimals:
        if i > n:
            break
        
        if n % i == 0:
            if ok(n // i):
                memo[n] = True
                return True
    
    memo[n] = False
    return False

def solve():
    n = int(sys.stdin.readline())
    print("YES" if ok(n) else "NO")

def main():
    t = int(sys.stdin.readline())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
