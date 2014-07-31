def  maxXor( l,  r):
    res = int(bin(l^r),2)
    for i in range(l,r):
        for j in range(i,r):
            temp = bin(i^j)
            if(int(temp,2)>=res):
                res=int(temp,2)
    return res
        
  
    

    

_l = int(raw_input());


_r = int(raw_input());

res = maxXor(_l, _r);
print(res)

