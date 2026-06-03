// codechef starters 241
#include <bits/stdc++.h>
using namespace std;
    
    
// if a&b == 0 then they have no common bit 1 at the same index
// so a+b = a|b  as no common bit

string sumReduction(int n, vector<int>&v)
{
    if(n==1) return "Yes";
    
    int bit=0;
    for(int i=0; i<n; i++)
    {
        if((bit & v[i]) != 0) return "No";
        bit = bit | v[i];
    }
    return "Yes";
}

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    vector<int>v(n);
	    for(int i=0; i<n; i++) cin >> v[i];
	    
	    cout << sumReduction(n,v) << endl;
	}
	
	return 0;
}
