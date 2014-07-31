#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int test,i,j;
    scanf("%d",&test);
    int counter[test];
    for(i=0;i<test;i++)
        counter[i]=0;
    i=0;
    while(test>i)
    {
        scanf("%s",a);
        for(j=0;j<strlen(a);j++)
        {
            if(a[j]=='A'||a[j]=='D'||a[j]=='O'||a[j]=='P'||a[j]=='Q'||a[j]=='R')
                counter[i]=counter[i]+1;
            else if(a[j]=='B')
                counter[i]=counter[i]+2;
        }
        i=i+1;
    }
    for(i=0;i<test;i++)
        printf("%d\n",counter[i]);
    return 0;
}
