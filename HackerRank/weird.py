#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Jun  7 21:28:53 2021

@author: yurifarod
"""

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())

    if  n/2 - int(n/2) > 0:
        print('Weird')
    elif n >= 2 and n <= 5:
        print('Not Weird')
    elif n >= 6 and n <= 20:
        print('Weird')
    elif n > 20:
        print('Not Weird')