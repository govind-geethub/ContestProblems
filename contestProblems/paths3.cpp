// codechef starters 219
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> path3(int n)
{
    vector<vector<int>>v(n, vector<int>(n,0));

    if(n==2)
    {
        vector<vector<int>>a(1, vector<int>(1));
        a[0][0]=-1;
        return a;
    }

    if(n==3)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==1 && j==0) continue;
                if(i==2 && j==0) continue;
                else v[i][j]=1;
            }
        }
        return v;
    }

    if(n%2==0)  // even n
    {
        int i=0;
        int a=n-1;
        for(int j=0; j<n; j++) v[i][j]=1;
        for(int k=0; k<n; k++) v[k][i]=1;
        for(int l=0; l<n; l++) v[a][l]=1;
        for(int m=0; m<n; m++) v[m][a]=1;
        v[1][n-2]=1;
        return v;
    }

    // odd n
    int i=0;    
    int a=1;
    int b=n-1;
    int c=n-2;
    for(int j=0; j<n-1; j++) v[i][j]=1;
    for(int k=1; k<n; k++) v[b][k]=1;
    for(int l=0; l<n; l++) v[l][a]=1;
    for(int m=0; m<n; m++) v[m][c]=1;
    int d=n/2;
    for(int x=a; x<=c; x++) v[d][x]=1;

    return v;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;

    vector<vector<int>>ans=path3(n);
    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    }
    return 0;
}