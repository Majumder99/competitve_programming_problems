t = int(input())

for _ in range(t):
    a = int(input())
    if a % 2 == 1:
        print("YES")
    else:
        if a & (a - 1) == 0:
            print("NO")
        else:
            print("YES")
