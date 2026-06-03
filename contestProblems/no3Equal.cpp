// codechef starters 241

#include <bits/stdc++.h>
using namespace std;

// every 3 same char segment needs 1 edit
// for 1,2 0 edits  3,4,5 1 edit similarly goes on 

int no3Equal(int n, string s)
{
    int count=0;
    int len=1;
    
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1]) len++; // forming segment of 3 same char
        else
        {
            count+=(len)/3; 
            len=1;
        }
    }
    
    count+=(len/3); // last segment check
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
        
        cout << no3Equal(n,s) << endl;
    }
    
    return 0;
}
