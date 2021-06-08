#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jun  8 16:35:17 2021

@author: yurifarod
"""

#Nao consegui avaliar essa questao, n sei se ta certa!

def getTime(s):
    enter = 'A'
    if s[0] != 'A':
        enter = enter + s
    else:
        enter = s
    value = []
    for char in enter:
        value.append(ord(char))
    time = 0
    for i in range(1, len(value)):
        if abs(value[i-1] - value[i]) < 13:
            time += abs(value[i-1] - value[i])
        else:
            time += abs(abs(value[i-1] - value[i]) - 25) + 1
    print(time)
    

s = 'AZGB'
getTime(s)
