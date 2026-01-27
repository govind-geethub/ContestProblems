// codechef starters 222
#include<bits/stdc++.h>
using namespace std;

int layeredCake(int n, int m, vector<int>&a, vector<int>&b)
{
    int cakes=0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i]>b[j]) cakes++;
        }
    }
    
    return cakes;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        
        vector<int>a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        
        vector<int>b(m);
        for(int i=0; i<m; i++) cin >> b[i];
        
        cout << layeredCake(n,m,a,b) << endl;
    }
    
    return 0;
}
