#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jun  8 14:49:53 2021

@author: yurifarod
"""

def displayPathtoPrincess(n,grid):
    position_p = [0, 0]
    position_m = [0, 0]
    for i in range(0, m):
        for j in range(0, m):
            if grid[i][j] == 'p':
                position_p = [i, j]
            if grid[i][j] == 'm':
                position_m = [i, j]
    
    while(position_m != position_p):
        if position_m[0] < position_p[0]:
            print('DOWN')
            position_m[0] = position_m[0]+1
        
        if position_m[0] > position_p[0]:
            print('UP')
            position_m[0] = position_m[0]-1
        
        if position_m[1] < position_p[1]:
            print('RIGHT')
            position_m[1] = position_m[1]+1
            
        if position_m[1] > position_p[1]:
            print('LEFT')
            position_m[1] = position_m[1]-1
            
    

m = int(input())
grid = [] 
for i in range(0, m): 
    grid.append(input().strip())

displayPathtoPrincess(m,grid)