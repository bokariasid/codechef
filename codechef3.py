total = int(raw_input())
divisor = int(raw_input())
count=0
while total>0:
	n=int(raw_input())
	if n%divisor == 0:
		count = count+1
	total=total-1

print count