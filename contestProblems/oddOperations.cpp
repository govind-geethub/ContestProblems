// codechef starters 221
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int oddOperations(ll n)
{
    string s=to_string(n);
    if(n%2==0 && s.size()==1) return -1;    // one digit even


    if(n%2==1) return 0;    // all odd

    for(int i=0; i<s.size(); i++)
    {
        int x=(int)s[i];
        if(x%2==1) return 1;    // atleast one digit odd
    }

    // all digit even
    int maxi=s[0];
    for(int i=1; i<s.size()-1; i++)
    {
        int x=(int)s[i];
        if(maxi<x) maxi=x;
    }

    int lastDigit=(int)s[s.size()-1];
    int count=(lastDigit/maxi)+1;   // one digit becomes odd

    return count+1; // +1 extra to convert number to odd
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        cout << oddOperations(n) << endl;
    }

    return 0;
}
