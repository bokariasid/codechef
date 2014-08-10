noOfJars,noOfOperations=raw_input().split()
jars =[0]*int(noOfJars)
for i in range(0,len(jars)):
	jars[i]=0
s=0
for i in range(0,int(noOfOperations)):
	a1,b1,k1=raw_input().split()
	a=int(a1)
	b=int(b1)
	k=int(k1)
	s= s + ((b-a+1)*k)
print s/int(noOfJars) 
	