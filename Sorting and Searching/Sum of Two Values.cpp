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
	
	
	long n,sum;
	cin>>n>>sum;
	vector<long>a(n);
	map<long,long> mp;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mp[a[0]]=0;
	for(int i=1;i< n;i++)
	{
		if(mp.count(sum-a[i])> 0)
		{
			cout<<mp[sum-a[i]]+1<<' '<<i+1;
			return 0;
		}
		else
		{
			mp[a[i]]=i;
		}
		
	}
	cout<<"IMPOSSIBLE";
	return 0;
}
