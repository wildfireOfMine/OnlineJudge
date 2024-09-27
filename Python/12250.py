# -*- coding: utf-8 -*-
"""
Coded on Spyder

@author: Iván
"""

greeting = str(input())
case = 0
while (greeting != '#'):
    case+=1
    if greeting == "HOLA":
        print("Case " + str(case) + ": SPANISH")
    elif greeting == "HALLO":
        print("Case " + str(case) + ": GERMAN")
    elif greeting == "HELLO":
        print("Case " + str(case) + ": ENGLISH")
    elif greeting == "CIAO":
        print("Case " + str(case) + ": ITALIAN")
    elif greeting == "BONJOUR":
        print("Case " + str(case) + ": FRENCH")
    elif greeting == "ZDRAVSTVUJTE":
        print("Case " + str(case) + ": RUSSIAN")
    else:
        print("Case " + str(case) + ": UNKNOWN")
        
    
    greeting = str(input())
