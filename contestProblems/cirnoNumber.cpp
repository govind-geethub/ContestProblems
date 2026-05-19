// upsolve 
// codeforces div 2

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cirnoNumber(ll a, vector<ll>&v)
{
    string s=to_string(a);
    ll l=s.length();
    ll ans=LLONG_MAX;

    // l-1 length
    if(l>1)
    {
        ll x=0;
        for(ll i=0; i<l-1; i++)
        {
            x*=10;
            x+=v[1];
        }

        ans=min(ans, llabs(a-x));
    }

    // l+1 length
    ll y=0;
    if(v[0]==0) y=v[1];
    else y=v[0];
    for(ll i=0; i<l; i++)
    {
        y*=10;
        y+=v[0];
    }
    ans=min(ans, llabs(a-y));

    // l length
    ll curr=0;
    bool flag=true;
    for(ll i=0; i<l; i++)
    {
        ll digit=s[i]-'0';
        for(ll k=0; k<v.size(); k++)
        {
            if(v[k]>digit)
            {
                ll tryy=curr*10+v[k];
                for(ll j=i+1; j<l; j++)
                {
                    tryy*=10;
                    tryy+=v[0];
                }
                ans=min(ans, llabs(a-tryy));
            }

            else if(v[k]<digit)
            {
                ll tryy=curr*10+v[k];
                for(ll j=i+1; j<l; j++)
                {
                    tryy*=10;
                    tryy+=v[1];
                }
                ans=min(ans, llabs(a-tryy));
            }
        }

        if(digit!=v[0] && digit!=v[1])
        {
            flag=false;
            break;
        }
        curr=curr*10 + digit;
    }

    if(flag) return 0;
    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a,n;
        cin >> a >> n;

        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        cout << cirnoNumber(a,v) << endl;
    }
    return 0;
}