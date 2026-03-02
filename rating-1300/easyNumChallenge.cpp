#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1073741824

ll divisor(ll num)
{
    ll res=0;
    for(ll i=1; i*i<=num; i++) 
    {
        if(num%i==0 && i!=num/i) res+=2;
        else if(num%i==0 && i==num/i) res++;
    }
    return res;
}

ll easyNumChallenge(ll a, ll b, ll c)
{
    ll result=0;

    unordered_set<ll>st;
    unordered_map<ll,ll>mpp;
    for(ll i=1; i<=a; i++)
    {
        for(ll j=1; j<=b; j++)
        {
            for(ll k=1; k<=c; k++)
            {
                ll temp=i*j*k;
                st.insert(temp);
                mpp[temp]++;
            }
        }
    }

    for(auto it : st)
    {
        ll n=divisor(it);
        result+=(n*mpp[it]);
    }

    return result % m;
}

int main()
{
    ll a,b,c;
    cin >> a >> b >> c;

    cout << easyNumChallenge(a,b,c) << endl;

    return 0;
}