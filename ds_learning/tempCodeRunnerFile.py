def binpow(a, b):
    if b == 0:
        return 1
    res = binpow(a, b//2)
    if b % 2 == 0:
        return res * res
    else:  
        return res * res * a
    
print(binpow(2, 100000000000))  # 1024