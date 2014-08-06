t=int(raw_input())
l=[]
for i in range(0,t):
    temp = int(raw_input())
    l.insert(i,temp)
count=0
g={1: 0,2: 0,3: 0,4: 0,5: 0,6: 0,7: 0,8: 0,9: 0} 	
for n in l:
	count=0
	t=n
	while t>0:
		r=t%10
		if(r!=0):
			if(n%r==0):
				count = count + 1
				g[r]=1

		t=t/10
	print count


'''
input:
11
123456789
114108089
110110015
121
33
44
55
66
77
88
106108048
output:
3
3
6
2
2
2
2
2
2
2
5'''