#include<bits/stdc++.h>
using namespace std;

string yaroslavPermutation(int n, vector<int>&v)
{
    // if any element freq > n/2
    // not possible
    unordered_map<int,int>mpp;
    for(int i=0; i<n; i++) mpp[v[i]]++;

    if(n%2==0)
    {
        for(int i=0; i<n; i++)
        {
            if(mpp[v[i]]>n/2) return "NO";
        }
        return "YES";
    }

    int x=(n/2)+1;
    for(int i=0; i<n; i++)
    {
        if(mpp[v[i]]>x) return "NO";
    }

    return "YES";
}

int main()
{
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    cout << yaroslavPermutation(n,v) << endl;

    return 0;
}