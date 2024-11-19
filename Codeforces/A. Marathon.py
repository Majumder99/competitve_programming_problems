n = int(input())
for _ in range(n):
    # first split the input, then make all of them integer then convert it to map, then convert it to list
    t = list(map(int, input().split()))
    timur = t[0]
    # sorting
    sorted_t = sorted(t)
    for i in range(0, len(t)):
        if sorted_t[i] == timur:
            print(len(t) - 1 - i)
            break
    
    
# slightly better solution
# n = int(input())
# for _ in range(n):
#     t = list(map(int, input().split()))
#     timur = t[0]
#     # Count how many participants ran further than Timur
#     count_greater = sum(1 if distance > timur else 0 for distance in t[1:])
#     print(count)
