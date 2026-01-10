// codechef starters 219
#include<bits/stdc++.h>
using namespace std;
string pizzaComparison(int a, int b)
{
    double a1=100, a2=225;
    double c1=a1/(double)a;
    double c2=a2/(double)b;

    if(c1>c2) return "Small";
    if(c2>c1) return "Large";
    return "Equal";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        cout << pizzaComparison(a,b) << endl;
    }
    return 0;
}