// codechef contest 217
#include<bits/stdc++.h>
using namespace std;
string add1or3(int n, int m)
{
    if(m<n) return "NO";
    int diff=m-n;

    if(diff%2!=0) return "NO";

    diff=diff/2;
    if(diff>n) return "NO";
    
    return "YES";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        cout << add1or3(n,m) << endl;
    }
    return 0;
}