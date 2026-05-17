// coeforces div 2
// upsolve
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll safeKill(ll n, ll x1, ll x2, ll k)
{
    if(n<=3) return 1;

    ll d=abs(x1-x2);
    d=min(d, n-d);
    return d+k;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,x1,x2,k;
        cin >> n >> x1 >> x2 >> k;

        cout << safeKill(n,x1,x2,k) << endl;
    }
    return 0;
}