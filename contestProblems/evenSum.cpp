// codechef straters 241
#include <bits/stdc++.h>
using namespace std;

string evenSum(int n, vector<int>&v)
{
    int sum=0;
    for(int i=0; i<n; i++) sum+=v[i];
    
    vector<int>res(n);
    for(int i=0; i<n; i++) 
    {
        res[i]=sum-v[i];
        if(res[i]%2==0) return "Yes";
    }
    
    return "No";
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
        
        cout << evenSum(n,v) << endl;
    }
    
    return 0;
}
