#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{
    if(a<2) return false;
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0) return false;
    }
    return true;
}

int nextPrime(int &a)
{
    a++;
    while(!isPrime(a))  a++;
    return a;
}

vector<long long> hungrySequence(long long n)
{
    vector<long long>ans;
    int a=1;
    for(long long i=0; i<n; i++)
    {
        ans.push_back(nextPrime(a));
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;

    vector<long long>ans=hungrySequence(n);
    for(long long i=0; i<ans.size(); i++) cout << ans[i] << " ";

    return 0;
}