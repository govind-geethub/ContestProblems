#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll a=1000000007;

// to convert -ve into positive by mod
// (((val%mod)+mod)%mod)
ll sequence(ll x, ll y, ll n)
{
    if(n==3) return (((y-x)%a)+a)%a;
    if(n==1) return ((x%a)+a)%a;
    if(n==2) return ((y%a)+a)%a;

    ll val=n/3;
    if(val%2==1)
    {
        if(n%3==1) return ((((-x)%a)+a)%a);
        if(n%3==2) return ((((-y)%a)+a)%a);
        if(n%3==0) return ((((y-x)%a)+a)%a);
    }

    if(val%2==0)
    {
        if(n%3==1) return ((((x)%a)+a)%a);
        if(n%3==2) return ((((y)%a)+a)%a);
        if(n%3==0) return ((((x-y)%a)+a)%a);
    }

    return -1;
}

int main()
{
    ll x,y;
    cin >> x >> y;

    ll n;
    cin >> n;

    cout << sequence(x,y,n) << endl;

    return 0;
}