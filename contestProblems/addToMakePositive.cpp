// codechef contest 217
#include <bits/stdc++.h>
using namespace std;
int addPos(int n, vector<int>&v)
{
    int req=0;
    int sum=0;
    for(int i=0; i<n; i++) sum+=v[i];
    
    if(sum>=0) return 0;

    int t=abs(sum);
    if(t%n==0) return t/n;

    int rem=t%n;
    t=t-rem+n;
    req=t/n;
    return req;
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
        cout << addPos(n,v) << endl;
    }
}