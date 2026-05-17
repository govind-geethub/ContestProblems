// codeforces div2
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int takeoutSteal(int n, vector<int>&v)
{
    int count=0;
    unordered_map<int,int>mpp;
    for(int i=0; i<n; i++) mpp[v[i]]++;

    if(mpp[0]) count+=mpp[0];

    while(mpp[1] && mpp[2])
    {
        count++;
        mpp[1]--; mpp[2]--;
    }

    //cout << mpp[1] << endl;

    while(mpp[1]>=3)
    {
        count++;
        mpp[1]-=3;
    }

    while(mpp[2]>=3)
    {
        count++;
        mpp[2]-=3;
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

        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        cout << takeoutSteal(n,v) << endl;
    }
    return 0;
}