#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<bitset>
#include<cmath>
#include<set>
using namespace std;
 
#define MOD 1000000007 
 
long soln(vector<long long > & a, long long totalSum,long long currSum,long i)
{
	if(i==0)
	{
		return abs(totalSum-currSum -currSum);
	}
	else
	{
		return min(soln(a,totalSum,currSum,i-1),soln(a,totalSum,currSum+a[i],i-1));
	}
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	int n;
	cin>>n;
	
	vector<long long > a(n);
	long long totalSum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		totalSum+=a[i];
	}
	
	
	cout<<soln(a,totalSum,0,n-1);
	return 0;
}
