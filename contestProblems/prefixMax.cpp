// codeforces div 4
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll prefixMax(ll n, vector<ll>&v)
{
    ll maxi=INT_MIN;
    ll ind=-1;
    for(ll i=0; i<n; i++)
    {
        if(v[i]>maxi)
        {
            maxi=v[i];
            ind=i;
        }
    }

    swap(v[0],v[ind]);

    return n*maxi;
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

        cout << prefixMax(n,v) << endl;
    }
    return 0;
}