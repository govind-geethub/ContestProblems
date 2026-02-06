// codechef starters 224
#include<bits/stdc++.h>
using namespace std;

int contest(int n, string s)
{
    int count=0;
    int maxi=0, sMaxi=0;
    
    // convert upper to lowercase
    for(int i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z') s[i]=s[i]-'A'+'a';
    }
    
    // counting
    unordered_map<char,int>mpp;
    for(int i=0; i<n; i++) mpp[s[i]]++;
    
    for(auto &it:mpp)
    {
        int freq=it.second;
        
        if(freq>=maxi)
        {
            sMaxi=maxi;
            maxi=freq;
        }
        
        else if(freq>=sMaxi && freq<maxi) sMaxi=freq;
        
    }
    
    count+=maxi;
    count+=sMaxi;
    
    return count;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        cout << contest(n,s) << endl;
    }
    
    return 0;
}