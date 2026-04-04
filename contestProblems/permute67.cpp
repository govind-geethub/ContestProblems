#include<bits/stdc++.h>
using namespace std;
#define ll long long

void permute67(ll n)
{
    ll large=3*n, small=1;
    for(ll i=0; i<n; i++)
    {
        ll a=small++;
        ll c=large--;
        ll b=large--;

        cout << a << " " << b << " " << c << " ";
    }
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        permute67(n);
        cout << endl;
    }

    return 0;
}