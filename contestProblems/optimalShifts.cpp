#include<bits/stdc++.h>
using namespace std;
int optimalShift(int n, string s)
{
    s=s+s;
    //cout << s << endl;
    int maxCount=0;
    int count=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='1') count=0;
        else
        {
            count++;
            maxCount=max(maxCount,count);
        }
    }
    return maxCount;
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
        cout << optimalShift(n,s) << endl;
    }
}