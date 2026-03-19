#include<bits/stdc++.h>
using namespace std;
int resellItem(int n, int k, vector<int>&v)
{
    sort(v.begin(), v.end(), greater<int>());
    int maxProfit=0, profit=0;

    for(int i=0; i<k; i++)
    {
        if(v[i]-5 > 0)
        {
            profit+=(v[i]-5);
            maxProfit=max(profit, maxProfit);
        }
    }

    //cout << maxProfit << endl;
    for(int i=k; i<n; i++)
    {
        if(v[i]-10 > 0)
        {
            profit+=(v[i]-10);
            maxProfit=max(maxProfit, profit);
        }
    }

    return maxProfit;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,k;
        cin >> n >> k;

        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        cout << resellItem(n,k,v) << endl;
    }
    return 0;
}