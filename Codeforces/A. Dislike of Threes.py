Polycarp_numbers = []
n = 1

while len(Polycarp_numbers) < 1000:
    if n % 3 != 0 and n % 10 != 3:
        Polycarp_numbers.append(n)
    n += 1
    
t = int(input())

for _ in range(t):
    k = int(input())
    print(Polycarp_numbers[k - 1])