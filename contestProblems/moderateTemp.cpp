// codechef starters 232
#include<bits/stdc++.h>
using namespace std;

int modTemp(int n, vector<int>&v)
{
    int maxi=*max_element(v.begin(), v.end());
    int mini=*min_element(v.begin(), v.end());
    
    int count=0;
    
    for(int i=0; i<n; i++)
    {
        if(v[i]!=maxi && v[i]!=mini) count++;
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
        
        cout << modTemp(n,v) << endl;
    }
    
    return 0;
}