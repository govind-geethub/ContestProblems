// codechef starters 237
#include <bits/stdc++.h>
using namespace std;

int finalElement(int n, vector<int>&a)
{
    while(a.size()!=1)
    {
        for(int i=0; i<a.size()-1; i++)
        {
            a[i]=(a[i]^a[i+1]);
        }
        a.pop_back();
    }
    
    return a[0];
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
        
        cout << finalElement(n,v) << endl;
    }
    
    return 0;
}