// codeforeces div.3 
#include<bits/stdc++.h>
using namespace std;

int socialExp(int n)
{
    if(n<=3) return n;
    int x=n%2;
    return x;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        cout << socialExp(n) << endl;
    }
    return 0;
}