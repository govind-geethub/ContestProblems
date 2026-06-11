#include<bits/stdc++.h>
using namespace std;

int draftPick(int n, int k)
{
    int maxi = INT_MIN;
    
    bool flag=true;
    vector<int>v(n,0);
    while(true)
    {
        if(flag)
        {
            for(int i=0; i<n; i++)
            {
                if(k == 0) return maxi;
                v[i] += k;
                maxi = max(maxi,v[i]);
                k--;
            }
        }
        else
        {
            int x=0;
            for(int i=n-1; i>=0; i--)
            {
                if(k==0) return maxi;
                v[i] += k;
                maxi = max(maxi, v[i]);
                k--;
            }
        }
        
        flag = !flag;
    }
    
    return maxi;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        
        cout << draftPick(n,k) << endl;
    }
    
    return 0;
}