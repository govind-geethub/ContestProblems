// codechef starters 229
#include<bits/stdc++.h>
using namespace std;

string allZero(int a, int b, int c)
{
    while(c>1)
    {
        b--;
        c-=3;
    }

    if(c!=0) return "No";
    while(b>1)
    {
        a--;
        b-=2;
    }

    if(a==0 && b==0) return "Yes";
    return "No";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
    int a,b,c;
    cin >> a >> b >> c;

    cout << allZero(a,b,c) << endl;
    }

    return 0;
}