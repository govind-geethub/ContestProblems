#include<bits/stdc++.h>
using namespace std;

string unluckyTicket(int n, string s)
{
    vector<int>first;
    vector<int>second;

    for(int i=0; i<2*n; i++)
    {
        int d=s[i]-'0';
        if(i<n) first.push_back(d);
        else    second.push_back(d);
    }

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    // for(int i=0; i<n; i++)
    // {
    //     cout << first[i] << " ";
    // }

    // cout << endl;

    // for(int i=0; i<n; i++)
    // {
    //     cout << second[i] << " ";
    // }

    // cout << endl;

    int t=0, f=0;
    for(int i=0; i<n ; i++)
    {
        if(first[i]<second[i]) t++;
        else if(first[i]>second[i]) f++;
    }
    
    //cout << t << " " << f << endl;

    if(f==n || t==n) return "YES";
    return "NO";
}

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    cout << unluckyTicket(n,s) << endl;

    return 0;
}