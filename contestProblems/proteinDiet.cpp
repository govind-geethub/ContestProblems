// codechef starters 221
#include <bits/stdc++.h>
using namespace std;

string check(int x, int y)
{
    if(x>=y) return "YES";
    return "NO";
}

int main() 
{
    int x,y;
    cin >> x >> y;
    cout << check(x,y) << endl;
    return 0;
}
