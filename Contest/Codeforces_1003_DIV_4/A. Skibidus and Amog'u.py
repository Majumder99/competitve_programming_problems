t = int(input())

for _ in range(t):
    a = input()
    res = ""
    for i in range(len(a) - 2):
        res += a[i]
    res += "i"
    print(res)
