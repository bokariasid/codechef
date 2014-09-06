n=int(raw_input())
s=raw_input().split();
l=[]
for i in range(0,len(s)):
    l.insert(i,int(s[i]))
    
for i in range(0,len(l)):
    if not l:
        break;
    a=min(l)
    #print a
    print len(l)
    for j in range(0,len(l)):
        if(a>=l[j]):
            l[j]=0
        else:
            l[j]=l[j]-a
    l=filter(lambda a: a != 0, l)
    