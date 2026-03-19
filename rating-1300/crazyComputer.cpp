#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll crazyComputer(ll n, ll c, vector<ll>&v)
{
    ll count=1;

    for(ll i=1; i<n; i++)
    {
        if(v[i]-v[i-1]<=c) count++;
        else count=1;
    }

    return count;
}

int main()
{
    ll n,c;
    cin >> n >> c;

    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    cout << crazyComputer(n,c,v) << endl;

    return 0;
}