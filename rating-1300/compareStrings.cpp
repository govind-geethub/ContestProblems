#include<bits/stdc++.h>
using namespace std;
string compareStrings(string s1, string s2)
{
    if(s1.size()!=s2.size()) return "NO";

    vector<int>v;
    int n=s1.size();

    for(int i=0; i<n; i++)
    {
        if(s1[i]!=s2[i]) v.push_back(i);
    }

    //  for(int i=0; i<2; i++) cout << v[i] << " ";

    swap(s1[v[0]],s1[v[1]]);

    //  cout << s1 << endl;

    if(s1==s2) return "YES";
    return "NO";
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    cout << compareStrings(s1,s2) << endl;

    return 0;
}