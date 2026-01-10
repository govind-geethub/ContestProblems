#include<bits/stdc++.h>
using namespace std;
int nextPrime(int a)
{
    while(1)
    {
        a++;
        bool isPrime=true;
        for(int i=2; i*i<=a; i++)
        {
            if(a%i==0)
            {
                isPrime=false;
                break;
            }
        }
        if(isPrime) return a;
    }
}
int yetAnotherArray(int n, vector<long long>&v)
{
    int q=2;
    while(q<100)
    {
        for(int i=0; i<n; i++)
        {
            if(v[i]%q!=0) return q;
        }
        q=nextPrime(q);
    }
    return -1;
}
int main()
{
    int k;
    cin >> k;
    while(k--)
    {
        int n;
        cin >> n; 
        vector<long long>v(n);
        for(long long i=0; i<n; i++) cin >> v[i];
        cout << yetAnotherArray(n,v) << endl;
    }
    return 0;
}