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

print(sieve_eratosthenes(100))