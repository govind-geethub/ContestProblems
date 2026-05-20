// codechef starters 239
#include <bits/stdc++.h>
using namespace std;

string easySpeak(int n, string s)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') count=0;
        else
        {
            count++;
            if(count==4) return "Yes";
        }
    }
    
    return "No";
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
        
        cout << easySpeak(n,s) << endl;
    }
    
    return 0;
}