def finder(i):
    flag=0
    for j in xrange(1,n):
        for k in xrange(0,len(rocklist[j])):
            if(rocklist[j][k]==i):
                print k
                #return 1
                flag=1
    if(flag==1):
        return 1
    else:
        return 0

n = int(raw_input())
rocklist = []
i=0
count = 0
while n>i:
    i=i+1
    temp = raw_input()
    rocklist.insert(i,temp)
    
wordToCheck = rocklist[0]
for i in xrange(0,len(wordToCheck)):
    if(finder(wordToCheck[i])==1):
        count = count + 1

print count
    


                
