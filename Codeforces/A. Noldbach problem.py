def sieve_eratosthenes(n):
    prime = [True for i in range(n+1)]
    prime[0] = prime[1] = False
    p = 2
    while p**2 <= n:
        if prime[p]:
            for i in range(p**2, n+1, p):
                prime[i] = False
        p += 1
    return [p for p in range(2, n) if prime[p]]

sieve = sieve_eratosthenes(1001)

def sum_of_three(n):
    flag = False
    for i in range(0, len(sieve) - 1):
        if sieve[i] + sieve[i+1] + 1 == n:
            flag = True
            break
    return flag

n, k = map(int, input().split())
count = 0
for i in range(2, n+1):
    if i in sieve:
        if sum_of_three(i):
            count += 1
        
if count >= k:
    print("YES")
else:
    print("NO")