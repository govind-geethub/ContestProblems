// codechef starters 233
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n, vector<pair<ll,ll>> &v)
{
    sort(v.begin(), v.end());

    vector<ll> freq(n,0);
    ll covered = 0;

    ll l=0;
    ll ans = LLONG_MAX;

    for(ll r=0; r<3*n; r++)
    {
        if(freq[v[r].second]==0)    covered++;
        freq[v[r].second]++;

        while(covered==n)
        {
            ans=min(ans, v[r].first-v[l].first);
            freq[v[l].second]--;

            if(freq[v[l].second]==0)    covered--;
            l++;
        }
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<pair<ll,ll>> v;
        for(int i=0; i<n; i++)
        {
            ll a,b,c;
            cin >> a >> b >> c;

            v.push_back({a,i});
            v.push_back({b,i});
            v.push_back({c,i});
        }

        cout << solve(n, v) << endl;
    }

    return 0;
}