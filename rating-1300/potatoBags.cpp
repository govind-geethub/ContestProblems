#include<bits/stdc++.h>
using namespace std;
#define ll long long

void potatoBags(ll y, ll k, ll n)
{
    ll rem=0;
    if(y%k==0) rem=k;
    else rem=k-(y%k);
    
    bool found=false;
    while(rem+y<=n)
    {
        cout << rem << " ";
        found=true;
        rem+=k;
    }

    if(!found)
    {
        cout << -1 << endl;
        return;
    }
}

int main()
{
    ll y,k,n;
    cin >> y >> k >> n;

    potatoBags(y,k,n);
    return 0;
}