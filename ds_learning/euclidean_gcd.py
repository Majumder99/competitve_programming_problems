def gcd_euclidean(a, b):
    if b == 0: 
        return a
    return gcd_euclidean(b, a % b)

def lcm(a, b):
    return a * b // gcd_euclidean(a, b)


print(gcd_euclidean(48, 18))  # 6
print(lcm(48, 18))  # 144