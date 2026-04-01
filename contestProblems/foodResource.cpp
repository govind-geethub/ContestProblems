// codechef starters 232
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll foodResource(ll n, ll m, vector<ll>&v)
{   
    ll days=0;
    ll unit=0;
    for(ll i=0; i<n; i++) unit+=v[i];

    if(unit<m) return 0;

    ll low=1;    // maxDays 
    ll high=*max_element(v.begin(), v.end());        // minDays survival

    while(low<=high)
    {
        ll mid=(low+high)/2;
        ll people=0;
        for(ll i=0; i<n; i++)
        {
            people+=(v[i]/mid);
            if(people>=m) break;
        }

        if(people>=m) 
        {
            days=mid;   // can be the answer
            low=mid+1;  // check for if more days can be survived
        }

        else high=mid-1;    // if not check for less days
    }

    return days;
}

int main()
{
    ll n,m;
    cin >> n >> m;

    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    cout << foodResource(n,m,v) << endl;

    return 0;
}