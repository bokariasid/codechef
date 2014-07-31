n = int(raw_input())
a = []
b = []
c = []
for i in xrange(0,n):
	a.insert(i,i+1)
j=i+1
for i in xrange(0,n):
	b.insert(i,j+1)
	j=j+1
k=0
for i in xrange(0,n):
	for j in xrange(0,n):
		c.insert(k,a[i] + b[j]) 
		k=k+1
m = int(raw_input())
check = []
for i in xrange(0,m):
	temp = int(raw_input())
	check.insert(i,temp)
for x in xrange(0,m):
	print c.count(check[x])


	