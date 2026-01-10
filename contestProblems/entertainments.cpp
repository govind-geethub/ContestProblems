// codechef problems
#include <bits/stdc++.h>
using namespace std;
int entertainments(int c)
{
    int cost=0;
    for(int i=0; i<c; i++) cost+=200;
    
    if(cost<=1000) return cost;
    cost=1000;
    return cost;
}
int main() 
{
    int c;
    cin >> c;
    cout << entertainments(c) << endl;
}
