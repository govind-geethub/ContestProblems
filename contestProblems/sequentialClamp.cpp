// codechef starters 229
#include<bits/stdc++.h>
using namespace std;

int sequentialClamp(int n, vector<pair<int,int>>&v)
{
    int x=101;
    for(int i=0; i<n; i++)
    {
        if(x<v[i].first) x=v[i].first;
        if(x>v[i].second) x=v[i].second;

        if(x>=v[i].first && x<=v[i].second) continue;
    }

    return x;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<pair<int,int>>v(n);
        for(int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

        cout << sequentialClamp(n,v) << endl;
    }

    return 0;
}