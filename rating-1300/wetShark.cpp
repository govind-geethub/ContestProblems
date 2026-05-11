#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll wetShark(ll n, vector<ll>&v)
{
    ll sum=0;
    ll odd=0, even=0;
    for(ll i=0; i<n; i++)
    {
        if(v[i]%2==0) even++;
        else odd++;
    }

    for(ll i=0; i<n; i++) sum+=v[i];
    if(odd%2==0)    return sum;

    ll minOdd=LLONG_MAX;
    for(ll i=0; i<n; i++)
    {
        if(v[i]%2==1 && minOdd>v[i]) minOdd=v[i];
    }

    return sum-minOdd;
}

int main()
{
    ll n;
    cin >> n;
    
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    cout << wetShark(n,v) << endl;
    return 0;
}