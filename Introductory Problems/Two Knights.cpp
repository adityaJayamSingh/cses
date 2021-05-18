#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<bitset>
#include<cmath>
#include<set>
using namespace std;

#define MOD 1000000007 

void soln(long n)
{
	long long totalSquares=(n*n*(n*n -1 ))/2;
	long long twoxthreeMatrices= 4*(n-1)*(n-2);
	
	cout<<totalSquares-twoxthreeMatrices<<'\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	long n;
	cin>>n;
	
	for(long i=1;i<=n;i++)	
	{
		soln(i);
	}
	
	

	return 0;
}
