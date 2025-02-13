t = int(input())

for _ in range(t):
    n = int(input())
    while n & (n - 1):
        n &= n - 1
    print(n - 1)