n=int(raw_input())
l =[]
for i in range(0,n):
	t=raw_input()
	l.insert(i,t)
alphabets = {'a':1,'b':1,'c':1,'d':1,'e':1,'f':1,'g':1,'f':1,'h':1,'i':1,'j':1,'k':1,'l':1,'m':1,'n':1,'o':1,'p':1,'q':1,'r':1,'s':1,'t':1,'u':1,'v':1,'w':1,'x':1,'y':1,'z':1,}
print len(alphabets)
a=l[0]
final=0
for i in xrange(0,len(a)):
	c=0
	for j in xrange(1,n):
		if(l[j].count(a[i])>0):
			c = c+1
		if(c==n-1 and alphabets[a[i]]==1):
			alphabets[a[i]]=0
			final = final + 1
print final

		