#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bigSegment(ll n, vector<pair<ll,ll>>&v)
{
    vector<pair<ll,ll>>c(v.begin(), v.end());

    sort(c.begin(), c.end());

    ll a=INT_MAX;
    ll ind=0;

    for(ll i=0; i<n; i++)
    {
        if(c[i].first<=a) 
        {
            a=c[i].first;
            ind++;
        }
    }
    //  cout << ind << endl;

    for(int i=ind; i<n; i++)
    {
        if(c[i].second>c[ind-1].second) return -1;
    }
    
    ll x=c[ind-1].first, y=c[ind-1].second;

    ll index=-1;
    for(ll i=0; i<n; i++)
    {
        if(v[i].first==x && v[i].second==y) 
        {
            index=i;
            break;
        }
    }
    
    return index+1;
}

int main()
{
    ll n;
    cin >> n;

    vector<pair<ll,ll>>v(n);
    for(ll i=0; i<n; i++)  cin >> v[i].first >> v[i].second;

    cout << bigSegment(n,v) << endl;
    return 0;
}