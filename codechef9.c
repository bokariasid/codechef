#include<stdio.h>
int main()
{
    int rounds,p1,p2,difference,t,w,tp1,tp2;
    t=p1=p2=difference=0;
    tp1=tp2=0;
    w=0;
    rounds=0;
    scanf("%d",&rounds);
    scanf("%d %d", &p1, &p2);
    if(p1>p2)
        {difference = p1 - p2;
        w=1;}
    else
        {difference = p2 - p1;
        w=2;}
    rounds-=1;
    while(rounds>0)
    {
        scanf("%d %d", &tp1,&tp2);
        p1+=tp1;
        p2+=tp2;
        if(p1>p2)
        {
            t = p1 - p2;
            if(t>difference)
            {
                difference = t;
                w=1;
            }
        }
        else
        {
             t = p2 - p1;
            if(t>difference)
            {
                difference = t;
                w=2;
            }
        }
        rounds = rounds - 1;
        printf("%d %d",p1,p2);
    }
printf("%d %d", w,difference);
return 0;
}
