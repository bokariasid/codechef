#include<stdio.h>
int main()
{
int i=0;
for(;scanf("%d",&i)>0&&i!=42;printf("%d",i));
return 0;
}
