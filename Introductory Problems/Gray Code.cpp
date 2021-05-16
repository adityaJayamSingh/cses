#include<iostream>
#include<algorithm>
#include<bitset>
#include<cmath>
using namespace std;
 
#define MOD 1000000007 
 
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	int a[n]={0};
	
	for(int i=0;i<pow(2,n);i++)
	{
		bitset<16> b(i);
		for(int i=0;i<n-1;i++)
		{
			b[i]=b[i]^b[i+1];
		}
		string s=b.to_string();
		cout<<s.substr(16-n,17)<<'\n';
	}
	
	
	return 0;
}
