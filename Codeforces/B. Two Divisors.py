def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

t = int(input())

for _ in range(t):
    a, b = list(map(int, input().split()))
    if b % a ==0 :
        x = (b//a)*b
        print(x)
    else:
        x = b * (a // gcd(a, b))
        print(x)