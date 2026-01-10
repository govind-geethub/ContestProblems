// upsolve codechef starters 218

#include<bits/stdc++.h>
using namespace std;

/*
By observing some patterns, you can see that, except for 1 and 3, 
the answer will always be “no” for odd numbers. 
For even numbers that are exact powers of 2, dividing repeatedly by 2 will eventually reach 1. 
For even numbers that are not exact powers of 2, from the observation above, if LSB and next bit are 00,
*/

string collatzConjecture(long long n)
{
    if(n==1 || n==2 || n==3 || n==6) return "YES";
    
    long long lastBit=n%2;
    long long last2ndBit=(n/2)%2;
    
    if(lastBit==0 && last2ndBit==0) return "YES";
    
    return "NO";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << collatzConjecture(n) << endl;
    }
    return 0;
}