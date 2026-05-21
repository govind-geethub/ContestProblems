// codeforces 1099 div2
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> constructArr(ll n)
{
    vector<ll>v(n);
    ll num1=2*n;
    ll num2=2*n-1;

    ll ind=0;
    ll ind1=n-1;
    while(ind<ind1)
    {
        v[ind]=num1;
        v[ind1]=num2;
        num1-=2; ind++;
        num2-=2; ind1--;
    }

    if(v[n/2]==0) v[n/2]=num2;
    return v;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll>ans=constructArr(n);
        for(ll i=0; i<ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}