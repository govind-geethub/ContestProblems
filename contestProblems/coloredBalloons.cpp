// codechef 218
#include<bits/stdc++.h>
using namespace std;
int coloredBalloons(int n, vector<int>&v)
{
    int cost=0;
    
    for(int i=0; i<n; i++)
    {
        cost+=v[i]*(i+1);
    }
    
    return cost;
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
        
        cout << coloredBalloons(n,v) << endl;
    }
    
    return 0;
}