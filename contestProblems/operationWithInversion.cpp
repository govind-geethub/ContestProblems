#include<bits/stdc++.h>
using namespace std;
int inverseOp(int n, vector<int>&v)
{
    int count=0;
    int maxi=v[0];
    for(int i=1; i<n; i++)
    {
        if(v[i]<maxi) count++;
        else maxi=v[i];
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
        cout << inverseOp(n,v) << endl;
    }
    return 0;
}