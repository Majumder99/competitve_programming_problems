a = list(map(int, input().split()))
result = []

for i in range(len(a)):
    result.append(a[i])
    result.sort()  # Sort the array at every step

    mid = len(result) // 2  # vagfol dey

    if len(result) % 2 == 0:
        print(result[mid - 1])  # First median for even length
    else:
        print(result[mid])  # Median for odd length

