import math
i=0
x=[]
t = int(raw_input())
while t>i:

	temp = int(raw_input())
	x.insert(i,temp)
	i=i+1
	
i=0
while t>i:
	print math.factorial(x[i])
	i=i+1
	