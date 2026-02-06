// codechef starters 224
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int accomodation(ll b, ll g, ll x, ll y, ll n)
{
    if(x+y > n) return -1;

    ll rooms=(b+g+n-1)/n;   // ceil value
    ll u=LLONG_MAX;

    if(x>0) u=min(u,b/x);   // computing minimum
    if(y>0) u=min(u,g/y);   // from boys or girls

    if(rooms>u) return -1;
    return rooms;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        ll b,g,x,y,n;
        cin >> b >> g >> x >> y >> n;
        
        cout << accomodation(b,g,x,y,n) << endl;
    }
    
    return 0;
}