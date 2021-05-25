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
		a.push_back({x,1});
		a.push_back({y,-1});
	}
	int ans=0;
	int count=0;
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++)
	{
		if(a[i].second== -1 )
		{
			count--;
		}
		else{
			count++;
		}
		ans=max(count,ans);
	}
	ans=max(count,ans);
	
	cout<<ans;
	return 0;
}
