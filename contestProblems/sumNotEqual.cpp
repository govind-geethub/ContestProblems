// codechef starters 229
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sumNotEqual(ll n, vector<ll>&v)
{
    int ind1=-1, ind2=-1, ind3=-1;
    for(ll i=0; i<n; i++)
    {
        if(v[i]!=0)
        {
            ind1=i;
            break;
        }
    }

    for(ll i=0; i<n; i++)
    {
        if(i!=ind1)
        {
            ind2=i;
            break;
        }
    }

    int j=0;
    while(j<n)
    {
        if(j!=ind1 && j!=ind2)
        {
            ind3=j;
            break;
        }
        j++;
    }

    //cout << ind1 << " " << ind2 << " " << ind3 << endl;

    if(ind1>=0 && ind2>=0 && ind3>=0 && (v[ind1]+v[ind2]!=v[ind3])) cout << ind1+1 << " " << ind2+1 << " " << ind3+1;
    else if(ind1>=0 && ind2>=0 && ind3>=0 && (v[ind2]+v[ind3]!=v[ind1])) cout << ind2+1 << " " << ind3+1 << " " << ind1+1;
    else if(ind1>=0 && ind2>=0 && ind3>=0 && (v[ind3]+v[ind1]!=v[ind2])) cout << ind3+1 << " " << ind1+1 << " " << ind2+1;
    else cout << -1;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        sumNotEqual(n,v);
        cout << endl;
    }

    return 0;
}