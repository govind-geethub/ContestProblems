#include<bits/stdc++.h>
using namespace std;

int combinationLock(int n, string a, string b)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        int x=a[i]-'0';
        int y=b[i]-'0';

        //cout << x << " " << y << endl;

        if(y>x) count+=min(y-x, x+10-y);    // forward and backward check

        if(y<x) count+=min(x-y, y+10-x);

        //cout << count << endl;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    string a,b;
    cin >> a >> b;

    cout << combinationLock(n,a,b) << endl;

    return 0;
}