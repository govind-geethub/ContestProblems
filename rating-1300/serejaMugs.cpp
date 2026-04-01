#include<bits/stdc++.h>
using namespace std;

string serejaMugs(int n, vector<int>&v, int s)
{
    int sum=0;
    for(int i=0; i<n; i++) sum+=v[i];

    for(int i=0; i<n; i++)
    {
        int temp=v[i];
        v[i]=sum-temp;
    }

    for(int i=0; i<n; i++)
    {
        if(v[i]<=s) return "YES";
    }

    return "NO";
}

int main()
{
    int n,s;
    cin >> n >> s;

    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    cout << serejaMugs(n,v,s) << endl;
    return 0;
}