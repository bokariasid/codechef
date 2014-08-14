n=int(raw_input())
r=raw_input().split()
l = []
for i in range(0,n):
	l.insert(i,int(r[i]))
#print l
c=[]
for i in range(0,100):
	print l.count(i),