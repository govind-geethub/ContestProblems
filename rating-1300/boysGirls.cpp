#include<bits/stdc++.h>
using namespace std;

void boysGirls(int n, int m)
{
    char first,second;
    if(n>=m)
    {
        first='B';
        second='G';
    }

    else
    {
        first='G';
        second='B';
    }

    while(n>0 && m>0)
    {
        cout << first << second;
        if(first=='B') n--; else m--;
        if(second=='G') m--; else n--;
    }

    while(n--) cout << 'B';
    while(m--) cout << 'G';
}

int main()
{
    int n,m;
    cin >> n >> m;

    boysGirls(n,m);

    return 0;
}