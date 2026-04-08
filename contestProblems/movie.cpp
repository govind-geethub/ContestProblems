// codechef starters 233
#include<bits/stdc++.h>
using namespace std;

int movie(int n, int m, int a, int b, int c)
{
    int total=0;
    int mini=min(n,m);
    total+=(mini*c);
    
    n-=mini;
    m-=mini;
    
    if(n!=0) total+=(n*a);
    if(m!=0) total+=(m*b);
    
    return total;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,m,a,b,c;
        cin >> n >> m >> a >> b >> c;
        
        cout << movie(n,m,a,b,c) << endl;
    }
    
    return 0;
}