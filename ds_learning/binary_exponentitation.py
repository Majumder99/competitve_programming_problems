import sys

# Increase the maximum limit for string conversion of large integers
sys.set_int_max_str_digits(1000000)  # Set to 1,000,000 digits or higher if needed

def binpow(a, b):
    if b == 0:
        return 1
    res = binpow(a, b//2)
    if b % 2 == 0:
        return res * res
    else:  
        return res * res * a
    
print(binpow(50, 500000))