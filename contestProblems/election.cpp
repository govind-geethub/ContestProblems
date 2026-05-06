// codechef starters 237
#include<bits/stdc++.h>
using namespace std;

int election(int n, int x)
{
    int count=(n/2);
    count++;
    
    if(count>=x) return (count-x);
    return 0;
}

int main()
{
    int n,x;
    cin >> n >> x;
    
    cout << election(n,x) << endl;
    return 0;
}