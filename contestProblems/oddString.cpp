//codechef starters 221
#include<bits/stdc++.h>
using namespace std;

string oddString(int n, string s)
{
    unordered_map<char,int>mpp;
    for(int i=0; i<n; i++) mpp[s[i]]++;

    for(int i=0; i<n; i++)
    {
        if(mpp[s[i]]>2) return "NO";
    }

    return "YES";
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

        cout << oddString(n,s) << endl;
    }
    
    return 0;
}
