// codechef starters 232
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll equalDiff(int s, vector<int>&v)
{
    ll count=0;

    unordered_map<ll,ll>mpp;    // freq map
    for(int i=1; i<s; i++)
    {
        ll key=v[i]-i;
        mpp[key]++;
    }

    for(auto &it: mpp)
    {
        if(it.second>1)
        {
            ll sum=it.second*(it.second-1);     // nC2 pairs of combinations
            sum/=2;
            count+=sum;
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int>v(n+1);
        for(int i=1; i<n+1; i++) cin >> v[i];

        cout << equalDiff(n+1,v) << endl;
    }
    return 0;
}