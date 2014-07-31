from datetime import datetime

startTime = datetime.now()

#do something
def tell(string):
	j=0
	count =0
	string = string.upper()
	while j<len(string) and string[i] != '':
		if(string[j]=='A' or string[j]=='D' or string[j]=='O' or string[j]=='P' or string[j]=='Q' or string[j]=='R'):
			count = count + 1
		elif string[i]=='B':
			count = count + 2
		j=j+1
	return count

test = int(raw_input())
case=[]
i=0
while test>i:
	temp = raw_input()
	case.insert(i,temp)
	i=i+1

count = []
i=0
while test>i:
	print tell(case[i])
	i=i+1
print(datetime.now()-startTime)
