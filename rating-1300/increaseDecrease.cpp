#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int sum=0;
    for(int i=0; i<n; i++) sum+=v[i];
    
    if(sum%n==0) cout << n << endl;
    else cout << n-1 << endl;
    
    return 0;
}