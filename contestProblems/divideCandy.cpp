// codechef starters 237
#include <bits/stdc++.h>
using namespace std;

int dividingCandy(int n, int x, vector<int>&v)
{
    int maxReq=0;
    
    for(int i=0; i<n; i++)
    {
        if(v[i]%x==0) maxReq=max(maxReq, v[i]);
    }
    
    return maxReq;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        cout << dividingCandy(n,x,v) << endl;
    }
    
    return 0;
}