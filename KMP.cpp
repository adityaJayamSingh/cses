#include <bits/stdc++.h>

using namespace std;

bool KMP( string s, string p)
{
    int lcs[p.length()];
    lcs[0]=0;
    
    int j=0;
    for(int i=1;i< p.length();)
    {
        if( p[i]==p[j])
        {
            lcs[i]=j+1;
            j++;
            i++;
        }
        else{
            if( j!=0)
            {
                j=lcs[j-1];
            }
            else{
                lcs[i]=0;
                i++;
            }
        }
    }
    
    int i=0;
    j=0;
   while( i< s.length() && j < s.length() )
   {
       if( s[i]==p[j])
       {
           i++;
           j++;
       }
       else{
           if( j==0)
            {
                i++;
            }
            else{
                j=lcs[i-1];
            }
            
       }
       if( j== p.length())
        return true;
   }
    
    
    return false;
}


int main()
{
    
    string s="welcometojungleuknowtherulesthefittestsurvives!";
    string pattern="tojunglz";
    
    cout<<KMP(s,pattern);
    
    return 0;
}
