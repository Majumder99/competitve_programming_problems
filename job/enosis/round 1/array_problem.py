# my approach o(n^3)
# d = list(map(int, input().split(",")))
# t = int(input())

# counter = 0
# for i in range(len(d) - 2):
#     for j in range(i+1, len(d)):
#         for k in range(j+1, len(d)):
#             if d[i] < d[j] < d[k] and d[i] + d[j] + d[k] <= t:
#                 counter += 1
        
# print(counter)

# gpt approach two pointer and sorted 
def count_valid_triplets(d, t):
    d.sort()  # Sort the array for easier searching
    n = len(d)
    counter = 0
    
    # Iterate through each element as the first element of the triplet
    for i in range(n - 2):
        left, right = i + 1, n - 1  # Two-pointer approach
        
        while left < right:
            triplet_sum = d[i] + d[left] + d[right]
            
            if triplet_sum <= t:  
                # If valid, all elements from left to right form valid triplets
                # properties of a sorted array and the two-pointer technique
                counter += (right - left)
                left += 1  # Move left pointer to explore more
                
            else:
                right -= 1  # Reduce sum by moving right pointer
                
    return counter

# Read input
d = list(map(int, input().split()))
t = int(input())

# Get the result
result = count_valid_triplets(d, t)
print(result)
