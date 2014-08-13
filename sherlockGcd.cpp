#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a, int b)
{
int t;
  while(a)
{
    t=a;
    a=b%a;
    b=t;  
  }  
return b;
}
int main()
{
    int t,ans,n;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    ans=a[0];
    for(int i=1;i<n;i++)
    {
        ans = gcd(ans,a[i]);
    }
    if(ans==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    }
    
   return 0;   
}