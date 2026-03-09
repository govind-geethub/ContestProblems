#include<bits/stdc++.h>
using namespace std;
#define ll long long

// only 3 factors numbers 
// these are only numbers whose root is prime
// 1, n, num      n: prime(factor which gets repeated), num: actual number

bool checkPrime(ll b)
{
    if(b<=1) return false;
    
    for(ll i=2; i*i<=b; i++)
    {
        if(b%i==0) return false;
    }
    return true;
}

string tPrime(ll a)
{
    //cout << sqrt(a) << endl;
    ll c=sqrt(a);
    if(c*c==a && checkPrime(c)) return "YES";
    return "NO";
}

int main()
{
    ll n;
    cin >> n;

    vector<ll>v(n);
    for(ll i=0; i<n; i++) 
    {
        cin >> v[i];
        cout << tPrime(v[i]) << endl;
    }

    return 0;
}