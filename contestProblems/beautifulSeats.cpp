// codechef problems
#include <bits/stdc++.h>
using namespace std;
int bestSeats(int n, vector<int>&v)
{
    int minCost=INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        int cost=v[i]+v[i+1];
        if(cost<minCost) minCost=cost;
    }
    return minCost;
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
        cout << bestSeats(n,v) << endl;
    }
}
