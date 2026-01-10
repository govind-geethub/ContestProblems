#include<bits/stdc++.h>
using namespace std;
int pizzaTime(int n)
{
    int a=0;
    while(n>2)
    {
        a++;
        n=n-2;
    }
    return a;
}
int main()
{
    int k;
    cin >> k;
    while(k--)
    {
    int n;
    cin >> n;
    cout << pizzaTime(n) << endl;
    }
    return 0;
}