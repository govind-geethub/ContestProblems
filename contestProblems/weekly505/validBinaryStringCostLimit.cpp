#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    void solve(vector<string>&v, int k, int n, string &s)
    {
        if(s.length()==n)
        {
            int ind=0;
            for(int i=0; i<n; i++) 
                {
                    if(i>0 && (s[i]=='1' && s[i-1]=='1')) return;
                    if(s[i]=='1') ind+=i;
                }
            
            if(ind <= k) v.push_back(s);
            return;
        }

        solve(v,k,n,s+='0');
        s.pop_back();       // backtrack
        
        solve(v,k,n,s+='1');
        s.pop_back();
    }
    vector<string> generateValidStrings(int n, int k) 
    {
        vector<string>v;
        string s;
        
        solve(v,k,n,s);
        return v;
    }
};