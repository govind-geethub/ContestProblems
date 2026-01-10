// codeforces div 3
#include<bits/stdc++.h>
using namespace std;
int blackslexPassword(int k, int x)
{
    return k*x+1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k,x;
        cin >> k >> x;
        cout << blackslexPassword(k,x) << endl;
    }
    return 0;
}