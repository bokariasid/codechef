#include<stdio.h>
long long int fact(int n)
{
    long long int t=1;
    while(n>0)
    {
        t=t*n;
        n=n-1;
    }
    return t;
}
/*
int calzero(int n)
{
    int count = 0;
    while(n>0)
    {
        if(n%10==0)
        {
            count = count + 1;
            n=n/10;
        }
        else
            return count;
    }
}
*/

int main()
{
    int total,i=0;
    scanf("%d",&total);
    int a[total];
    for(i=0;i<total;i++)
         scanf("%d",&a[i]);
    for(i=0;i<total;i++)
    {
    printf("%lld\n",fact(a[i]));
    }
    return 0;
}
