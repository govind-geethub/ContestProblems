#include<bits/stdc++.h>
using namespace std;

int vitalyNight(int n, int m, vector<vector<int>>&v)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=2*m; j+=2)
        {
            if(v[i][j]==1 || (j+1<=2*m && v[i][j+1]==1)) count++;
        }
    }

    return count;
}

int main()
{
    int n,m;
    cin >> n >> m;

    vector<vector<int>>v(n, vector<int>(2*m+1));
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=2*m; j++)
        {
            cin >> v[i][j];
        }
    }

    cout << vitalyNight(n,m,v) << endl;
    return 0;
}