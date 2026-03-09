#include<bits/stdc++.h>
using namespace std;

// custom comparator
bool customComp(pair<int,int> a, pair<int,int> b)
{
    // if problems solved no equal
    // go for greater
    if(a.first != b.first) return a.first > b.first;

    // no. of problems equal
    // go for less time
    return a.second < b.second;
}

int rankList(int n, int k, vector<pair<int,int>>&v)
{
    int count=0;

    sort(v.begin(), v.end(), customComp);
    pair<int,int> temp=v[k-1];

    //cout << temp.first << " " << temp.second << endl;
    for(int i=0; i<n; i++)
    {
        if(v[i].first==temp.first && v[i].second==temp.second) count++;
    }

    return count;
}

int main()
{
    int n,k;
    cin >> n >> k;

    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

    cout << rankList(n,k,v) << endl;
    return 0;
}