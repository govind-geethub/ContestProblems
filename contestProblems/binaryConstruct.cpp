// codechef starters 234
#include<bits/stdc++.h>
using namespace std;

string binaryConstruct(int n)
{
    if(n==2) return "01";
    
    string ans="0";

    for(int i=0; i<n-2; i++)
    {
        ans+='1';
    }

    ans+='0';

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
        
        cout << binaryConstruct(n) << endl;
    }
    
    return 0;
}