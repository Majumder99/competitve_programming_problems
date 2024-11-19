n = int(input())
arr = list(map(int, input().split()))
sreeja = 0
dima = 0
    
s = 0
d = 0   
while len(arr) > 0:
    i = 0 
    if s % 2 == 0:
        if arr[i] > arr[len(arr) - 1]:
            sreeja += arr[i]
            arr.pop(i)
        else:
            sreeja += arr[len(arr) - 1]
            arr.pop(len(arr) - 1)
        s += 1
        d += 1
    else:
        if arr[i] > arr[len(arr) - 1]:
            dima += arr[i]
            arr.pop(i)
        else:
            dima += arr[len(arr) - 1]
            arr.pop(len(arr) - 1)
        s += 1
        d += 1
print(sreeja, dima)