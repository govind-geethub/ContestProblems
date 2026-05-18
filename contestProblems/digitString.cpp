// edu codeforces div2
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll digitString(string s)
{
    ll n=s.length();

    // 2 on right should be gone
    ll right2=0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='2') right2++;
    }

    ll total2=right2;

    ll left13=0;
    ll ans=LLONG_MAX;

    for(ll i=0; i<n; i++)
    {
        if(s[i]=='1' || s[i]=='3') left13++;
        else if(s[i]=='2') right2--;

        ll curr=right2+left13;
        ans=min(curr, ans);
    }

    // only 13
    ans=min(ans,total2);

    // removing all 4
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='4') ans++;
    }
    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        cout << digitString(s) << endl;
    }
    return 0;
}