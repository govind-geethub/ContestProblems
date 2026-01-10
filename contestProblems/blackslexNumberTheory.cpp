// upsolve
// codeforces div3

#include<bits/stdc++.h>
using namespace std;
int blackslexNumberTheory(int n, vector<int>&v)
{
    sort(v.begin(), v.end());
    // make everything 0 so req ans=v[0] 
    
    int ans=v[0];
    int a=v[1]-v[0];
    
    // but we need maximum if there is make all v[i] into v[0] 
    // we need v[i] % v[i]-v[0] = v[0]
    ans=max(ans,a);
    return ans;
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

        cout << blackslexNumberTheory(n,v) << endl;
    }
    return 0;
}