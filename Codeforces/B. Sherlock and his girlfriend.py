sieve = [0] * 100005
n = int(input())

for i in range(2,n+2):
    if sieve[i] == 0:
        for j in range(2*i, n+2, i):
            sieve[j] = 1
            
if n > 2: 
    print(2)
else:
    print(1)

for i in range(2,n+2):
    if sieve[i] == 1:
        print(2, end = " ")
    else:
        print(1, end = " ")