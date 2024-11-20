n = int(input())

for _ in range(n):
    num_str = input() 
    a = [int(digit) for digit in num_str]
    first_three = sum(a[:3])
    last_three = sum(a[3:])
    if first_three == last_three:
        print("YES")
    else:
        print("NO")
