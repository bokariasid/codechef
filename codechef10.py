testCase = int(raw_input())
pieArray = []
rackArray = []
i=0
n=0
count = 0
t=0
countArray = []
while testCase>t:
	n = int(raw_input())
	for i in xrange(0,n):
		temp = int(raw_input())
		pieArray.insert(i,temp)
	for i in xrange(0,n):
		temp = int(raw_input())
		rackArray.insert(i,temp)
	rackArray.sort()
	pieArray.sort()
	
	
	j=0
	for i in xrange(0,n):
		if(pieArray[j]<=rackArray[i]):
			count = count + 1
			j=j+1

	
	
	countArray.insert(t,count)
	count=0
	t=t+1
for x in xrange(0,t):
	print countArray[x]