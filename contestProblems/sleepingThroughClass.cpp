#include<bits/stdc++.h>
using namespace std;
int sleepingClass(int n, int k, string s)
{
    int wake=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1' && i+k<n)
        {
            wake++; // count for 1
            for(int j=i+1; j<=i+k; j++) // count for 0s
            {
                if(s[j]=='1') break;    // if 1=special so break
                else wake++;
            }
        }
        else if(s[i]=='1' && i+k>=n)
        {
            wake++;
            for(int j=i+1; j<n; j++)
            {
                if(s[j]=='1') break;
                else wake++;
            }
        }
        //cout << wake << endl;
    }
    return n-wake;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << sleepingClass(n,k,s) << endl;
    }
    return 0;
}