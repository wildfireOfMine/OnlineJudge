# -*- coding: utf-8 -*-
"""
Coded on Spyder

@author: Iván
"""

testCases = int(input())

for i in range(testCases):
    a, b = map(int, input().split())
    if a == b:
        print("=")
    elif a>b:
        print(">")
    else:
        print("<")
