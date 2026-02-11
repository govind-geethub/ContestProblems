// codechef starters 225
#include <bits/stdc++.h>
using namespace std;

int maxScore(int n, vector<int>&a, vector<int>&b)
{
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++)
    {
        v.push_back({b[i],a[i]});
    }

    int leastDiff=v[0].second-v[0].first;   // calc. least diff b/w a and b
    int ind=0;

    for(int i=1; i<n; i++)
    {
        int diff=v[i].second-v[i].first;
        if(diff<leastDiff)
        {
            leastDiff=diff;
            ind=i;
        }
    }

    int score=0;
    score+=v[ind].first;

    for(int i=0; i<n; i++)
    {
        if(i!=ind) score+=v[i].second;
        else continue;
    }

    return score;
}

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int>a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<int>b(n);
        for(int i=0; i<n; i++) cin >> b[i];

        cout << maxScore(n,a,b) << endl;
    }

    return 0;
}
