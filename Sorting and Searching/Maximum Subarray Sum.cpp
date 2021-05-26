#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<bitset>
#include<cmath>
#include<set>
#include<map>
 
using namespace std;
 
#define MOD 1000000007  
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	long n;
	cin>>n;
	vector<long>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long past=0;
	long long best=-1e18;
	for(int i=0;i< n;i++)
	{
		if(past + a[i] > a[i])
		{
			past+=a[i];
		}
		else
		{
			past=a[i];
		}
		best=max(past,best);
	}
	
	cout<<best;
	return 0;
}
