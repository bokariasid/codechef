#include<iostream>
using namespace std;
int main()
    {
    int n,t,a,b;
    int small=999;
    cin>>n>>t;
    int width[n],lane[t];
    for(int i=0;i<n;i++)
 {       cin>>width[i];
         //cout<<width[i]<<"\n";
}
    cout<<width[0];
    for(int i=0;i<2*t;i++)
       { 
        cin>>lane[i];
       }
    for(int i=0;i<2*t;i=i+2)
    {
        a = lane[i];b=lane[i+1];
        cout<<a<<" "<<b<<":\n";
        small = width[a+1];
        cout<<small;
        for(int j = a+1;j<=b;j++)
            {
            if(small>=width[j])
                small = width[j];
        }
        cout<<small<<"\n";
    
    }
    return 0;
}