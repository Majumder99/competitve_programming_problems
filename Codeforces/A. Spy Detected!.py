t = int(input())

for _ in range(t):
    a = int(input())
    b = list(map(int, input().split()))
    c = list(set(b))
    if b.count(c[0]) == 1:
        print(b.index(c[0]) + 1)
    else:
        print(b.index(c[1]) + 1)