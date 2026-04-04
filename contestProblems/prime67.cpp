#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;

    for(ll i=3; i*i<=n; i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}

// generate first k primes
vector<ll> generatePrimes(int k)
{
    vector<ll> primes;
    ll num=2;

    while(primes.size()<k)
    {
        if(isPrime(num))    primes.push_back(num);
        num++;
    }

    return primes;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<ll> primes=generatePrimes(n+1);

        for(int i=0; i<n; i++) cout << primes[i]*primes[i+1] << " ";
        cout << endl;
    }

    return 0;
}