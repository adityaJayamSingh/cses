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
	vector<pair<int,int>>a;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		a.push_back({y,x});
	}
	int ans=0;
	int lmft=-1;
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++)
	{
		if( a[i].second >=  lmft )
		{
			ans++;
			lmft=a[i].first;
		}
	}
	
	cout<<ans;
	return 0;
}
