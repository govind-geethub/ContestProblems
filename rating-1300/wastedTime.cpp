#include<bits/stdc++.h>
using namespace std;
#define ll long long

double wastedTime(ll n, ll k, vector<pair<ll,ll>>&v)
{
    double dist=0;
    for(ll i=1; i<n; i++)
    {
        double x=(v[i].first-v[i-1].first);
        x=x*x;
        //cout << x << endl;

        double y=(v[i].second-v[i-1].second);
        y=y*y;
        //cout << y << endl;

        dist+=sqrt(x+y);
    }

    //cout << dist << endl;

    double res=dist*k/50.0;
    //cout << res << endl;

    return res;
}

int main()
{
    ll n,k;
    cin >> n >> k;

    vector<pair<ll,ll>>v(n);
    for(ll i=0; i<n; i++) cin >> v[i].first >> v[i].second;

    cout << fixed << setprecision(9) << wastedTime(n,k,v) << endl;
    return 0;
}