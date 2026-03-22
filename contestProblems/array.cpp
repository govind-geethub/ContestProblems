#include<bits/stdc++.h>
using namespace std;
#define ll long long

// k is closer to v[j] then satisfies
// k= +infinity  we get v[j]>v[i] 
// k=-infinity we get v[j]<v[i]
// we check which count is maximum

void Array(ll n, vector<ll>&v)
{
    for(ll i=0; i<n; i++)
    {
        ll c1=0, c2=0;
        for(ll j=i+1; j<n; j++)
        {
            if(v[j]>v[i]) c1++;
            if(v[j]<v[i]) c2++;
        }

        cout << max(c1,c2) << " ";
    }

    cout << endl;
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

        Array(n,v);
    }
    return 0;
}