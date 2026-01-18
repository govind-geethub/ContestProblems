// codeforces div 4
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void perfectRoot(ll n)
{
    for(ll i=1; i<=n; i++) cout << i << " ";
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        perfectRoot(n);
        cout << endl;
    }
    return 0;
}