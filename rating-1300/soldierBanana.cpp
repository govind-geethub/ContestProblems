#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll soldierBanana(ll k, ll n, ll w)
{
    ll prod=w*w;
    prod+=w;
    prod/=2;

    prod*=k;
    //cout << prod << endl;

    ll res=0;
    if(prod>n)
    {
        res=prod-n;
        return res;
    }

    return 0;
}

int main()
{
    ll k,n,w;
    cin >> k >> n >> w;

    cout << soldierBanana(k,n,w)  << endl;
    return 0;
}