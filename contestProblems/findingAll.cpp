// codechef starters 237
#include <bits/stdc++.h>
using namespace std;

void findingAll(int n, vector<int>&v)
{
    int c0=0, c1=0, c2=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==0) c0++;
        else if(v[i]==1) c1++;
        else if(v[i]==-1)c2++;
    }
    
    //cout << c1 << " " << c2 << endl;
    
    if(c1!=0 && c2!=0 && c1>1 && c2>1) cout << -1 << " " << 0 << " " << 1 << endl;
    else if(c1>c2 && c2==1) cout << -1 << " " << 0 << endl;
    else if(c1<c2 && c1==1) cout << 0 << " " << 1 << endl;
    else if(c1!=0 && c2==0) cout << -1 << endl;
    else if(c2!=0 && c1==0) cout << 1 << endl;
    else cout << 0 << endl;
    
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
        
        findingAll(n,v);
    }
    
    return 0;
}
