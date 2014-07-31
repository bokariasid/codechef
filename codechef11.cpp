#include<iostream>
#include<stdlib.h>
using namespace std;
inline int checkPrime(long long a);
inline int palindrome(long long y);
int main()
{
	long long y;
	cin>>y;
   while(1)
   {
       if(checkPrime(y)&&palindrome(y))
       {
       break;}
       y=y+1;
   }
   cout<<y;
   return 0;
}
int checkPrime(long long y)
{
    int flag=1;
    for(int i=2;i<y/2;i++)
    {
        if(y%i==0)
        {
            flag=0;
            return 0;
        }
    }
	if(flag == 1)
        return 1;
}
int palindrome(long long y)
{

    long long t,check,r;
    t=y;
    check =0;
    while(t>0)
    {
        r=t%10;
        check =check*10 + r;
        t=t/10;
    }
    if(check == y)
        return 1;
    else
        return 0;
}
