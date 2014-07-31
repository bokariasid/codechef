import math
'''
def calZero(number):
	count = 0
	while number>0:
		if(number%10==0):
			count = count+1
			number = number/10
			
		else:
			return count
'''
i=0
x=[]
t = int(raw_input())
while t>i:

	temp = int(raw_input())
	x.insert(i,temp)
#	y = math.factorial(x[0])
	i=i+1
#	print calZero(y)
	
i=0
while t>i:
	print math.factorial(x[i])
	i=i+1
	#print calZero(y)

