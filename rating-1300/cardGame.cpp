#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool customComp(pair<char,ll> a, pair<char,ll> b)
{
    return a.second>b.second;
}

ll cardGame(ll n, ll k, string s)
{
    unordered_map<char,ll>freq;
    for(ll i=0; i<n; i++) freq[s[i]]++;

    vector<pair<char,ll>>temp(freq.begin(), freq.end());
    sort(temp.begin(), temp.end(), customComp);

    ll i=0, res=0;
    while(k>0 && i<temp.size())
    {
        ll take=min(k,temp[i].second);
        res+=take*take;
        k-=take;
        i++;
    }

    return res;
}

int main()
{
    ll n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    cout << cardGame(n,k,s) << endl;

    return 0;
}