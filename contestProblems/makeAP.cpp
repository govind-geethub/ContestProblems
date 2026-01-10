//codechef contest 217
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int AP(int n, vector<int>&v)
{
    int req=0;
    int succDiff=v[1]-v[0];
    for(int i=2; i<n; i++)
    {
        succDiff=gcd(succDiff, v[i]-v[i-1]);
        //cout << succDiff << endl;
    }
    
    if(succDiff==0) return 0;

    int t=v.size();
    int a=v[t-1]-v[0];
    a=a/succDiff;
    a=a+1;
    
    if(a<=t) return 0;
    req=a-t;
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
        cout << AP(n,v) << endl;
    }
}