#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>euclidALgo(ll n, vector<ll>&v)
{
    sort(v.begin(), v.end(), greater<ll>());

    if(n==2) return v;

    // if equal the not possible
    for(ll i=1; i<n; i++)
    {
        if(v[i] == v[i-1]) return {-1};
    }

    for(ll i=0; i+2<n; i++)
    {
        if(v[i] % v[i+1] != v[i+2]) return {-1};
    }

    return {v[0],v[1]};
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        vector<ll>ans=euclidALgo(n,v);
        for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}