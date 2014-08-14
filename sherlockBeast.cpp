#include<iostream>
using namespace std;

int main()
{
	
	long long n;
int t,r,flag=0;
cin>>t;
while(t--)
{
	cin>>n;
	flag=0;
		if(n%3==0 && flag!=1)
			for (int i = 0; i < n; ++i)
			{
				cout<<5;
				flag=1;
			}
	else
	if(n>=3)
	{
			if(flag!=1)
			{
				long long i;
				for ( i = 0; i*3 < n; i++)
				{
					/* code */
					r=n-(i*3);
					if(r%5==0)
					{
						flag=1;
						break;
					}
				}
				//cout<<i<<" "<<r;
				if(flag==1)
				{
								for(int j=0;j<i*3;j++)
									cout<<5;
								for(int h=0;h<r;h++)
									cout<<3;
								}
			}
		else if(n%5==0 && flag!=1)
			for (int i = 0; i < n; ++i)
			{
				
				 cout<<3;flag=1;
			}
	}
	else
		if(flag!=1)
	cout<<-1;
	cout<<"\n";
}
return 0;
}
