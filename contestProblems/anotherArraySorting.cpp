// codeforces 1099 div2
#include<bits/stdc++.h>
using namespace std;
#define ll long long

string anotherSortingProblem(ll n, vector<ll>&v)
{
    if(n==1 || n==2) return "YES";
    if(n==3)
    {
        if(v[0]>v[1] && v[1]>v[2]) return "NO";
        else return "YES";
    }

    bool flag=true;
    for(ll i=1; i<n; i++)
    {
        if(v[i]-v[i-1] < 0) 
        {
            flag=false;
            break;
        }
    }
    if(flag) return "YES";

    ll maxi=v[0];
    ll diff=0;
    for(ll i=1; i<n; i++)
    {
        if(v[i]<maxi)
        {
            diff=max(diff, maxi-v[i]);
        }

        maxi=max(maxi, v[i]);
    }

    if(diff==0) return "YES"; // already sorted

    for(ll i=1; i<n; i++)
    {
        if(v[i]<v[i-1]) v[i]+=diff;
    }

    // check if sorted
    for(ll i=1; i<n; i++)
    {
        if(v[i]<v[i-1]) return "NO";
    }

    return "YES";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        cout << anotherSortingProblem(n,v) << endl;
    }

    return 0;
}