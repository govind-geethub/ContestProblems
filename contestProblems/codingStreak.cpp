// codechef starters 224
#include<bits/stdc++.h>
using namespace std;

int codingStreak(int n, vector<int>&v)
{
    int maxCount=0;
    int count=0;
    
    for(int i=0; i<n; i++)
    {
        if(v[i]<1) count=0;
        else
        {
            count++;
            maxCount=max(maxCount,count);
        }
    }
    
    return maxCount;
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
        
        cout << codingStreak(n,v) << endl;
    }
    
    return 0;
}