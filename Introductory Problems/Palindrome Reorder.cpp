#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;
 
#define MOD 1000000007 
 
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin>>s;
	
	map<char,int> a;
	
	string firstPart="";
	string lastPart="";
	string oddPart="";
	for(long i=0;i<s.length();i++)
	{
		a[s[i]]++;
	}
	
	for(map<char,int>::iterator i = a.begin();i!=a.end();i++)
	{
		if(i->second%2==0)
		{
			firstPart+=string(i->second/2,i->first);
			lastPart+=string(i->second/2,i->first);
		}
		else
		{
			if(i->second==1)
			{
				oddPart+=i->first;
			}
			else
			{
				firstPart+=string((i->second-1)/2,i->first);
				lastPart+=string((i->second-1)/2,i->first);
				oddPart+=i->first;
			}
			
		}
	}
	if(oddPart.length() >1)
	{
		cout<<"NO SOLUTION";
	}
	else
	{
		
	
	reverse(lastPart.begin(),lastPart.end());
	
	cout<<firstPart <<oddPart<< lastPart;
	}
	
	
	
	return 0;
}
