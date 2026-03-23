#include<bits/stdc++.h>
using namespace std;

int accomodate(int n, vector<pair<int,int>>&v)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(v[i].second-v[i].first >=2 ) count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

    cout << accomodate(n,v) << endl;

    return 0;
}