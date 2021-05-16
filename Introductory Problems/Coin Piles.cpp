#include<iostream>
#include<cmath>
using namespace std;
 
#define MOD 1000000007 
 
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long x;
	cin>>x;
	while(x--)
	{
		long a,b;
		cin>>a>>b;
		long min=a<b?a:b;
		long max=a>b?a:b;
		
		if(min*2 < max)
		{
			cout<<"NO\n";
			continue;
		}
		if(a==0 && b==0)
		{
			cout<<"YES\n";
			continue;
		}
		if((a+b)%3==0 )
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		
	}
	
	
	
	return 0;
}
