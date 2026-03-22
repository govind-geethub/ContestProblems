#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll flipFlop(ll n, ll c, ll k, vector<ll>&v)
{
    sort(v.begin(), v.end());
    for(ll i=0; i<n; i++)
    {
        if(v[i]>c) break;

        ll use=min(k,c-v[i]);   // check till v[i]<=c

        v[i]+=use;  // monster power increase
        k-=use; // flip flops used
        
        c+=v[i];    // power inceased
    }

    return c;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,c,k;
        cin >> n >> c >> k;

        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        cout << flipFlop(n,c,k,v) << endl;
    }
    return 0;
}