#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Jun  7 21:08:00 2021

@author: yurifarod
"""

import os
import sys

def simpleArraySum(ar):
    sum=0;
    for i in range(len(ar)):
        sum+=ar[i]
    return (sum)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = simpleArraySum(ar)

    fptr.write(str(result) + '\n')

    fptr.close()