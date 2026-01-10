// codechef starters 220C
#include<bits/stdc++.h>
using namespace std;

int movieHype(int n, vector<int>&v)
{
    int mini=max(v[0],v[1]);
    int currMaxi=INT_MIN;

    for(int i=1; i<n; i++)
    {
        currMaxi=max(v[i],v[i+1]);
        mini=min(mini,currMaxi);
    }

    return mini;
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
        for(int i=0; i<n+1; i++) cin >> v[i];

        cout << movieHype(n,v) << endl;
    }
    
    return 0;
}