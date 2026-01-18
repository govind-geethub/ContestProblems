// codeforces div 4
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll shiftedMEX(ll n, vector<ll>&v)
{
    unordered_set<ll>st;
    for(ll i=0; i<n; i++) st.insert(v[i]);

    ll m=st.size();
    vector<ll>temp(st.begin(), st.end());

    sort(temp.begin(), temp.end());

    ll ans=0;
    ll len=0;

    for(ll i=0; i<m; i++)
    {
        if(i==0 || temp[i]!=temp[i-1]+1) len=1;
        else len++;

        ans=max(ans,len);
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

        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        cout << shiftedMEX(n,v) << endl;
    }
    return 0;
}