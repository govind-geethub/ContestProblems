// codechef starters 219
#include<bits/stdc++.h>
using namespace std;

int onesZeros(int n, string s)
{
    int count=0;
    int j=0;
    int one=0, zero=0;

    while(j<n)
    {
        if(s[j]=='0') zero++;
        if(s[j]=='1') one++;

        if(one>=zero) count++;
        j++;
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << onesZeros(n,s) << endl;
    }
    
    return 0;
}
