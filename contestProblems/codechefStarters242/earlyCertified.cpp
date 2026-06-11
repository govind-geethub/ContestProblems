#include<bits/stdc++.h>
using namespace std;
#define ll long long

string earlyCertified(int n, int m, string s1, string s2)
{
    int i=0, j=0;
    string ans;
    while(i<n && j<m)
    {
        if(s1[i] != s2[j]) break;
        ans+=s1[i];
        i++; j++;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,m;
        cin >> n >> m;

        string s1, s2;
        cin >> s1 >> s2;

        cout << earlyCertified(n,m,s1,s2) << endl;
    }
    return 0;
}