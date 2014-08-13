#include<iostream>
#include<math.h>
using namespace std;
int checkprime(int n)
    {
    int i=sqrt(n);
    for(int j=2;j<i;j++)
        {
        if(n%j==0)
        return -1;
    }
return 1;
}
int main()
{
    int t,flag;
    cin>>t;
    while(t--)
    {
        flag=-1;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {
            
           flag= checkprime(a[i]);
            if(flag==-1)
            {
                cout<<"NO\n";
                break;
            }
        }
    if(flag==1)
    cout<<"YES\n";     
    }
    return 0;   
}