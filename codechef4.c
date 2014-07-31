#include<stdio.h>
int fact(int n)
{
    int t=1;
    while(n>0)
    {
        t=t*n;
        n=n-1;
    }
    return t;
}

int main()
{
    int total,i=0;
    scanf("%d",&total);
    int a[total];
    for(i=0;i<total;i++)
         scanf("%d",&a[i]);
    for(i=0;i<total;i++)
    {
    printf("%d\n",fact(a[i]));
    }
    return 0;
}
