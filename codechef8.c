#include <stdio.h>      
#include <stdlib.h>     
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
  int n,size,i;
  scanf("%d",&size);
  int values[size];
  for (i = 0; i < size; ++i)
  {
     /* code */
   scanf("%d",&values[i]);
  }
  qsort (values, size, sizeof(int), compare);
  for (n=0; n<size; n++)
     printf ("%d\n",values[n]);
  return 0;
}