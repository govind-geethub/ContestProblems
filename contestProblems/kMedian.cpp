// codechef starters 233
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void kMedian(ll n, ll k, vector<ll>&v)
{
    sort(v.begin(), v.end());

    ll m=n-k;
    ll ind=(m-1)/2;

    ll l=ind, r=ind+k;

    unordered_set<ll>st;
    for(ll i=l; i<=r; i++) st.insert(v[i]);

    vector<int>ans(st.begin(), st.end());
    sort(ans.begin(), ans.end());
    
    for(ll i=0; i<st.size(); i++) cout << ans[i] << " ";
    cout << endl;
}   

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        kMedian(n,k,v);
    }

    return 0;
}