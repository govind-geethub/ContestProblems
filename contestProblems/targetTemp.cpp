// upsolve
// codechef starters 231

#include<bits/stdc++.h>
using  namespace std;
#define ll long long

// the final temperatures can be achieved if the max element occurs 1 or multiple times
// not for the lesser elements their freq be only equal to 1
 
string targetTemp(ll n, vector<ll>&v)
{
    sort(v.begin(), v.end());
    
    ll maxi=*max_element(v.begin(), v.end());
    
    unordered_map<ll,ll>mpp;
    for(ll i=0; i<n; i++) mpp[v[i]]++;
    
    for(ll i=0; i<n; i++)
    {
        if(mpp[v[i]]>1 && v[i]!=maxi) return "No";
    }
    
    return "Yes";
}

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;
        
        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        
        cout << targetTemp(n,v) << endl;
    }
    
    return 0;
}