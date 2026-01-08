// codechef starters 220C
#include<bits/stdc++.h>
using namespace std;

string fbMatch(int n, string s)
{
    unordered_map<char,int>freq;
    for(int i=0; i<n; i++)
    {
        freq[s[i]]++;
        if(freq[s[i]]>=2) return "YES";
    }

    return "NO";
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

        cout << fbMatch(n,s) << endl;
    }
    return 0;
}