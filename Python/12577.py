# -*- coding: utf-8 -*-
"""
Coded on Spyder

@author: Iván
"""

chant = str(input())
case = 0
while (chant != '*'):
    case+=1
    if chant == "Hajj":
        print("Case " + str(case) + ": " + "Hajj-e-Akbar" )
    else:
        print("Case " + str(case) + ": " + "Hajj-e-Asghar" )
    
    chant = str(input())
