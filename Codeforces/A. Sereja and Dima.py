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


# little efficient
# n = int(input())
# arr = list(map(int, input().split()))

# # Initialize scores for Sereja and Dima
# sreeja = 0
# dima = 0

# # Two pointers for the array
# left = 0
# right = n - 1

# # Alternate turns (True for Sereja, False for Dima)
# turn = True

# while left <= right:
#     # Determine which card to take (leftmost or rightmost)
#     if arr[left] > arr[right]:
#         chosen_card = arr[left]
#         left += 1
#     else:
#         chosen_card = arr[right]
#         right -= 1

#     # Add the chosen card to the appropriate player's score
#     if turn:
#         sreeja += chosen_card
#     else:
#         dima += chosen_card

#     # Alternate turn
#     turn = not turn

# # Print the final scores
# print(sreeja, dima)
