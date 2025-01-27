# How to know if a number is a power of 2?

def powerOfTwo(n):
    return n and (not(n & (n - 1)))


def evenOrOdd(n):
    return n & 1

def main():
    n = 16
    print(powerOfTwo(n))
    print(True if evenOrOdd(n) == 0 else False)
    
if __name__ == "__main__":
    main()