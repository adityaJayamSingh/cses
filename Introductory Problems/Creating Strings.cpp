#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
#include<bitset>
#include<cmath>
#include<set>
using namespace std;

#define MOD 1000000007 

set<string> Set;
void soln(string s, int index,int n)
{
	
	if(index<n)
	{

		for(int i=index;i<n;i++)
		{

			swap(s[i],s[index]);
			Set.insert(s);	
			soln(s,index+1,n);
			Set.insert(s);	
			swap(s[i],s[index]);
			
		}
		
		
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin>>s;
	soln(s,0,s.length());
	cout<<Set.size()<<'\n';
	for(set<string>::iterator i=Set.begin();i!=Set.end();i++)
	{
		cout<<*i<<'\n';
	}
	
	
	
	return 0;
}
