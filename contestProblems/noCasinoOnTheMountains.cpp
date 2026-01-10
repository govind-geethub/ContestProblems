#include<bits/stdc++.h>
using namespace std;
int noCasinoOnMountains(int n, int k, vector<int>&v)
{
    int hike=0;
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==0)
        {
            count++;
            if(count%k==0)
            {
                hike++;
                i++;
            }
        }
        else count=0;
    }
    return hike;
}
int main()
{
    int m;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int n,k;
        cin >> n >> k;
        vector<int>weather(n);
        for(int i=0; i<n; i++)
        {
            cin >> weather[i];
        }
        cout << noCasinoOnMountains(n,k,weather) << endl;
    }
    return 0;
}