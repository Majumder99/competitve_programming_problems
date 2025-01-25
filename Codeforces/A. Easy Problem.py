t = int(input())

for _ in range(t):
    n = int(input())
    counter = 0
    for i in range(n):
        a = n - (i+1)
        if a == 0:
            break
        else:
            counter += 1
            
    print(counter)