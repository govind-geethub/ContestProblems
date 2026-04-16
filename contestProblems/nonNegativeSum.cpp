// codechef starters 234
#include<bits/stdc++.h>
using namespace std;

int nonNegativeSum(int n, vector<int>&v)
{
    sort(v.begin(), v.end());

    long long sum = 0;
    for(int i = 0; i < n; i++) sum+=v[i];

    int count = n;
    for(int i=0; i<n; i++)
    {
        if(sum>=0) break;

        sum-=v[i];
        count--;
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

        cout << nonNegativeSum(n,v) << endl;
    }

    return 0;
}