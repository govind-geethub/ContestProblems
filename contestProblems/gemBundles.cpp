#include <bits/stdc++.h>
using namespace std;
long long total(long long r, long long b, long long g)
{
    long long coin=0;
    while(r!=0 && b!=0 && g!=0)
    {
        coin=coin+10;
        r--;
        b--;
        g--;
    }
    
    coin+=3*r;
    coin+=3*b;
    coin+=3*g;
    return coin;
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
      long long r,b,g;
      cin >> r >> b >> g;
      cout << total(r,b,g) << endl;
    }
    return 0;
}
