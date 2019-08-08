# -*- coding: utf-8 -*-
"""
Created on Thu Aug  8 11:27:21 2019

@author: yfdantas
"""

t = int(input())
par = []
impar = []
for i in range(0, t):
    num = int(input())
    
    if num % 2 == 0:
        par.append(num)
    else:
        impar.append(num)
        
par_ord = sorted(par)
impar_ord = sorted(impar, reverse=True)

for i in par_ord:
    print(i)
for i in impar_ord:
    print(i)