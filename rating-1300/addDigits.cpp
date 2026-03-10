#include<bits/stdc++.h>
using namespace std;
#define ll long long

string addDigit(int a, int b, int n)
{
    for(int i=0; i<=9; i++)
    {
        if((a*10+i)%b==0) // combining every last digit and checking if b divides it or not
        {
            a=a*10+i;
            break;
        }
        //cout << a << endl;
    }

    n--;    // 1 operation done
    
    //cout << a << endl;
    if(a%b!=0) return "-1";

    string ans=to_string(a);
    while(n--) ans+='0';

    return ans;
}

int main()
{
    int a,b,n;
    cin >> a >> b >> n;

    cout << addDigit(a,b,n) << endl;

    return 0;
}