// upsolve
// codeforces div 2
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll chairSitting(ll n, vector<ll>&v)
{
    ll count=0;

    for(ll i=1; i<=n; i++)
    {
        if(v[i]<=i) count++;
    }

    return count;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll>v(n+1);
        for(ll i=1; i<=n; i++) cin >> v[i];

        cout << chairSitting(n,v) << endl;
    }
    return 0;
}