#include <stdio.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	/* code */
	int testCase,i=0,n=0,count = 0,t=0,j;
	scanf("%d",&testCase);
	int rackArray[30],pieArray[30],countArray[30];
	while(testCase>t)
	{
		scanf("%d",&n);
		for ( i = 0; i < n; ++i)
		{
			/* code */
			scanf("%d",&pieArray[i]);
		}
		for ( i = 0; i < n; ++i)
		{
			/* code */
			scanf("%d",&rackArray[i]);
		}
		qsort(pieArray, n, sizeof(int), cmpfunc);
		qsort(rackArray, n, sizeof(int), cmpfunc);
		j=0;
		for ( i = 0; i < n; ++i)
		{
			/* code */
			if(pieArray[j]<=rackArray[i]){
			count = count + 1;
			j=j+1;
		}
		}
		countArray[t] = count;
		count = 0;
		t=t+1;
	}
	for ( i = 0; i < t; ++i)
	{
		/* code */
		printf("%d\n",countArray[i] );
	}
	return 0;
}