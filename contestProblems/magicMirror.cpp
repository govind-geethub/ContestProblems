// codechef starters 239
#include <bits/stdc++.h>
using namespace std;

string magicMirror(int n, vector<int>&v)
{
    int x1=v[n/2];
    int x2=v[(n/2)+1];
    
    int ind1=n/2;
    int ind2=(n/2)+1;
    
    while(ind1-1>=0 && ind2+1<=n)
    {
        int diff1=v[ind1]-v[ind1-1];
        int diff2=v[ind2+1]-v[ind2];
        
        if(diff1!=diff2) return "No";
        ind1--;
        ind2++;
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
        
        vector<int>v(n+1);
        for(int i=1; i<=n; i++) cin >> v[i];
        
        cout << magicMirror(n,v) << endl;
    }
    
    return 0;
}