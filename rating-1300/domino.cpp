#include<bits/stdc++.h>
using namespace std;

int domino(int n, vector<vector<int>>&v)
{
    int sumUp=0, sumDown=0;
    bool parity=false;
    for(int i=0; i<n; i++)
    {
        sumUp+=v[i][0];
        sumDown+=v[i][1];

        if((v[i][0]%2)!=(v[i][1]%2)) parity=true;
    }

    if(sumUp%2==0 && sumDown%2==0) return 0;    // even even
    else if((sumUp%2) != (sumDown%2)) return -1;    // odd/even  even/odd
    
    // odd odd
    else
    {
        if(parity) return 1;
        else return -1;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>>v(n, vector<int>(2));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> v[i][j];
        }
    }

    cout << domino(n,v) << endl;

    return 0;
}