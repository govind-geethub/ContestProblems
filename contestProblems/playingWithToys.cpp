// codechef contest 217
#include <bits/stdc++.h>
using namespace std;
int playingToys(int n, int m)
{
    int sub=n-m;
    if(sub<0) return 0;
    return sub;
}
int main() 
{
    int n,m;
    cin >> n >> m;
    cout << playingToys(n,m) << endl;
}