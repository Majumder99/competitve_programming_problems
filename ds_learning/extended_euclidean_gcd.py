def extended_euclidean_gcd(a, b):
    if b == 0:
        return a, 1, 0
    else:
        gcd, x1, y1 = extended_euclidean_gcd(b, a % b)
        x = y1
        # a // b will give us floor value of a/b
        y = x1 - (a // b) * y1
        return gcd, x, y


a, b = 30, 20
gcd, x, y = extended_euclidean_gcd(a, b)
print(f"GCD: {gcd}, x: {x}, y: {y}")
