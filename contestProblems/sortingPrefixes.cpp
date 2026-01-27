// codechef starters 222
#include<bits/stdc++.h>
using namespace std;

int sortingCost(int n, vector<int>&v)
{
    int ind=-1;
    for(int i=n-1; i>=0; i--)
    {
        if(v[i]!=i+1)
        {
            ind=i;
            break;
        }
    }

    if(ind==-1) return 0;
    return v[ind];
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
        
        cout << sortingCost(n,v) << endl;
    }
    
    return 0;
}