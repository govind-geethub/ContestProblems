#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int distinct(string s)
    {
        int n=s.size();
        unordered_set<char>st;
        for(int i=0; i<n; i++) st.insert(s[i]);
        return st.size();
    }
    
    int residuePrefixes(string s) 
    {
        int n=s.size();
        string a="";

        int count=0;
        unordered_map<string,int>mpp;
        for(int i=0; i<n; i++)
            {
                a+=s[i];
                int l=a.size()%3;
                if(mpp.find(a)==mpp.end())
                {
                    if(distinct(a)==l) count++;
                }
            }
        return count;
    }
};