#include<bits/stdc++.h>
using namespace std;

int penguinMatrix(int n, int m, vector<vector<int>>&v, int d)
{
    int count=0;
    int size=n*m;

    vector<int>temp;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) 
        {
            temp.push_back(v[i][j]);
        }
    }

    sort(temp.begin(), temp.end());

    int check=temp[0]%d;
    for(int i=1; i<size; i++)
    {
        int c=temp[i]%d;
        if(check!=c) return -1;
    }

    int ele=temp[size/2];
    for(int i=0; i<size; i++)
    {
        count+=abs(ele-temp[i])/d;
    }

    return count;
}

int main()
{
    int n,m,d;
    cin >> n >> m >> d;

    vector<vector<int>>v(n, vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin >> v[i][j];
    }

    cout << penguinMatrix(n,m,v,d) << endl;
    return 0;
}