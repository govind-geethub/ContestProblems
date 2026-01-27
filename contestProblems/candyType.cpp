// codechef starters 222 
#include<bits/stdc++.h>
using namespace std;

int candyTypes(int n, vector<int>&v)
{
    map<int,int>mpp;
    for(int i=0; i<n; i++) mpp[v[i]]++;
    
    int maxi=INT_MIN;
    vector<int>val;
    for(int i=0; i<n; i++)
    {
        if(mpp[v[i]]>maxi) 
        {
            maxi=mpp[v[i]];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if(mpp[v[i]]==maxi) val.push_back(v[i]);
    }
    
    sort(val.begin(), val.end());
    return val[0];
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
        
        cout << candyTypes(n,v) << endl;
    }
    return 0;
}
