d = list(map(int, input().split(",")))
t = int(input())

counter = 0
for i in range(len(d) - 2):
    for j in range(i+1, len(d)):
        for k in range(j+1, len(d)):
            if d[i] < d[j] < d[k] and d[i] + d[j] + d[k] <= t:
                counter += 1
        
print(counter)