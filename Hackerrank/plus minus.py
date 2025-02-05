#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    # Write your code here
    dic = {'positive': 0, 'negative': 0, 'zero': 0}
    for i in arr:
        if i > 0:
            dic['positive'] += 1
        elif i < 0:
            dic['negative'] += 1
        else:
            dic['zero'] += 1
    for i in dic:
        print('{:.6f}'.format(dic[i]/len(arr)))
    

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
