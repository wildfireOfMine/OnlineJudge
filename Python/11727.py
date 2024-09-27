"""
SublimeText

@author: Iván
"""
case=1
loop = int(input())
for i in range(loop):
	a, b, c = map(int, input().split())
	if ((a > b or b < c) and (a < b or b > c)):
		print("Case " + str(case) + ": " + str(b))
	elif ((b > a or a < c) and (b < a or a > c)):
		print("Case " + str(case) + ": " + str(a))
	elif ((a > c or c < b) and (a < c or c > b)):
		print("Case " + str(case) + ": " + str(c))
	case+=1
