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

n = int(input())
result = 0
for i in range(2, n+1):
    primes = sieve_eratosthenes(i)
    count = 0
    for p in primes:
        if i % p == 0:
            count += 1
        else:
            continue
    if count == 2:
        result += 1
    
print(result)