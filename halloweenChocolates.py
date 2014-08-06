import math
t=int(raw_input())
l=[]
for i in range(0,t):
    temp=int(raw_input())
    l.insert(i,temp)
for n in l:
    a=math.ceil(n/2)
    b=n-a
    print int(a*b)