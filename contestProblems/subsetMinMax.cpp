// upsolve 
// codechef starters 237

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll subsetMinMax(ll n, ll x, vector<ll>&temp, string s)
{
    ll ans=0, cost=0, maxi=0;
    vector<pair<ll,int>>v;
    for(ll i=0; i<n; i++)
    {
        int a=s[i]-'0';
        v.push_back({temp[i], a});
    }
    sort(v.begin(), v.end());
    
    for(ll i=n-1; i>=0; i--)
    {
        if(v[i].second==1)
        {
            maxi=v[i].first;
            break;
        }
    }
    
    // maxi: maximum so far
    
    for(ll i=0; i<n; i++)
    {
        // calc. with current max so far
        // taking min=v[i] and then after flipping off
        ans = max(ans, cost - x*(!v[i].second) + v[i].first*max(maxi,v[i].first));
        
        // if off flipping the global maximum and calc.
        ans = max(ans, cost - x*(!v[i].second) + v[i].first*v[n-1].first-x);
        
        cost -= x*(v[i].second);
        //cout << cost << " ";
    }
    
    //cout << endl;
    return ans;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        ll n,x;
        cin >> n >> x;
        
        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        
        string s;
        cin >> s;
        
        cout << subsetMinMax(n,x,v,s) << endl;
    }
    
    return 0;
}