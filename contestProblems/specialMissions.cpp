#include <bits/stdc++.h>
using namespace std;
int coin(int n, int c, vector<int>&a, string s)
{
    int coins=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0') coins+=a[i];
    }
    
    int Scoins=0;
    if(coins>=c)
    {
      Scoins=coins-c;
      for(int i=0; i<n; i++)
      {
          if(s[i]=='1') Scoins+=a[i];
      }
    }
    if(Scoins>coins) return Scoins;
    return coins;
}

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,c;
        cin >> n >> c;
        
        vector<int>a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        
        string s;
        cin >> s;
        
        cout << coin(n,c,a,s) << endl;
    }
    return 0;
}
