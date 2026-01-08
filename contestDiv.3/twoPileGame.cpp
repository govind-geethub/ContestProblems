// codechef starters 220C
#include<bits/stdc++.h>
using namespace std;

string twoPile(int x, int y)
{
    if(x%2==0) return "Bob";
    else return "Alice";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x,y;
        cin >> x >> y;

        cout << twoPile(x,y) << endl;
    }

    return 0;
}