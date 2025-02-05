#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    input = s.split(':')
    hours = int(input[0])
    minutes = int(input[1])
    seconds = int(input[2][:2])
    if input[2][2:] == 'PM' and hours != 12:
        hours += 12
    if input[2][2:] == 'AM' and hours == 12:
        hours = 0
    return '%02d:%02d:%02d' % (hours, minutes, seconds)
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
