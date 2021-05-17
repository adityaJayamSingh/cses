#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
#include<bitset>
#include<cmath>
using namespace std;
 
#define MOD 1000000007 
 
void soln(int n,int x,int y,int z)
{
	if(n>=1)
	{
		soln(n-1,x,z,y);
		cout<<x<<' '<<z<<'\n';
		soln(n-1,y,x,z);
		
		
	}
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	cout<<pow(2,n)-1<<'\n';
	soln(n,1,2,3);
	
	
	
	return 0;
}
