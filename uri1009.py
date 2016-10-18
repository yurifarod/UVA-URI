# -*- coding: utf-8 -*-

nome = (raw_input())
salFixo = float(raw_input())
qtdVend = float(raw_input())

bonus = qtdVend*0.15

total = salFixo + bonus

print("TOTAL = R$ %0.2f" %total)
