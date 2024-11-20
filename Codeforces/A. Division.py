t = int(input())

for _ in range(t):
    b = int(input())
    if b <= 1399:
        print("Division 4")
    elif b <= 1599:
        print("Division 3")
    elif b <= 1899:
        print("Division 2")
    else:
        print("Division 1")