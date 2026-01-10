// codechef 218
#include<bits/stdc++.h>
using namespace std;

int countToStop(int n, string s)
{
    int c=0, a=0;
    int count=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='1') c++;
        else a++;

        if(c>a) 
        {
            // cout << c << endl;
            // cout << a << endl;
            count++;
        }
    }
    
    return count;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << countToStop(n,s) << endl;
    }
    return 0;
}