// codechef startes 219
#include <bits/stdc++.h>
using namespace std;

int cakeBake(int n, int m)
{
    if(2*n<=m) return n;
    return m-n;
}

int main() 
{
    int n,m;
    cin >> n >> m;
    cout << cakeBake(n,m) << endl;
    return 0;
}
