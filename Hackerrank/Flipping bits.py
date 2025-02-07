#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'flippingBits' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts LONG_INTEGER n as parameter.
#

def flippingBits(n):
    # Write your code here
    decimal = n.to_bytes(32, 'big')
    binary1 = bin(int.from_bytes(decimal, 'big'))[2:]
    binary2 = binary1.zfill(32)
    flipped = int((''.join(['1' if bit == '0' else '0' for bit in binary2])), 2)
    return flipped

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        n = int(input().strip())

        result = flippingBits(n)

        fptr.write(str(result) + '\n')

    fptr.close()
