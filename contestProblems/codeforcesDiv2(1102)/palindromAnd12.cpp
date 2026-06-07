#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> palindromeTwelveTerms(ll n)
{
    ll a=0,b=0;
    ll rem=n%12;

    if(rem<=9) a=rem;
    else if(rem==10) a=22;  // created apalindrome inHand
    else a=11;

    if(n<a) return {-1};    // eg n=10
    return {a,n-a};
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll>ans=palindromeTwelveTerms(n);
        for(ll i=0; i<ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}