t = int(input())

for _ in range(t):
    s = input().strip()
    if any(s[i] == s[i+1] for i in range(len(s) - 1)):
        print(1)
    else:
        print(len(s))
