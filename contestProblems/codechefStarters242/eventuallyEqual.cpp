// upsolving

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll eventuallyEqual(ll a, ll b, ll c)
{
    if(a == b) return 0;
    
    else if(__gcd(a,c) == __gcd(b,c)) return 1;
    
    else if(__gcd(a,c+1) == __gcd(b,c+1)) return 2; // 1. c++  2. take gcd
    
    else return 3;  // 1. gcd  2. c++  3. gcd  (gcd(c, c+1) always 1) so gets equal     so never > 3
}

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        
        cout << eventuallyEqual(a,b,c) << endl;
    }
    
    return 0;
}