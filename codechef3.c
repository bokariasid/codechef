#include<stdio.h>
int main()
{
    int divisor,total,n,count=0;
    scanf("%d%d",&total,&divisor);
    while(total>0)
    {
        scanf("%d",&n);
        if(n%divisor==0)
            count++;
        total--;
    }
    printf("%d",count);
    return 0;
}
