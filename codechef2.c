#include<stdio.h>
int main()
{
	float y;
	int x;
	scanf("%d%f",&x,&y);
	if((y<=x)||(x%5!=0)||((y-x-0.50)<0))
		printf("%.2f", y);
	else
		printf("%.2f",y - (x + 0.50));
	return 0;
}
