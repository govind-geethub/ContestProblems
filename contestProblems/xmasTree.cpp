// codechef 218
#include<bits/stdc++.h>
using namespace std;
int xmasTree(int n, int a, int m, int b)
{
    int cost=n*a;
    int sell=(m*b);
    
    int profit=(sell-cost);
    return profit;
}

int main()
{
    int n,a,m,b;
    cin >> n >> a >> m >> b;
    cout << xmasTree(n,a,m,b) << endl;
    return 0;
}