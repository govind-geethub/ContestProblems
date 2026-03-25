// codechef starters 231
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int imperfectNumbers(int n)
{
    if(n%2==0 && n%10!=0) return 0;
    if(n%5==0 && n%10!=0) return 0;

    if(n%2==1 && n%5!=0)
    {
        int temp=n;
        if(n+1 % 10 == 0) n+=3;
        else n++;
        return abs(temp-n);
    }

    int temp=n;
    n+=2;
    return abs(temp-n);
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        cout << imperfectNumbers(n) << endl;
    }
    return 0;
}