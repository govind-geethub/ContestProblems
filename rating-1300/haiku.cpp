#include<bits/stdc++.h>
using namespace std;

string haiku(string a, string b, string c)
{
    int c1=0, c2=0, c3=0;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') c1++;
    }

    for(int i=0; i<b.length(); i++)
    {
        if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u') c2++;
    }

    for(int i=0; i<c.length(); i++)
    {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u') c3++;
    }

    // cout << a << endl;

    // cout << c1 << c2 << c3 << endl;

    if(c1==5 && c2==7 && c3==5) return "YES";
    return "NO";
}

int main()
{
    string a,b,c;

    getline(cin,a);     // to get the words after the space
    getline(cin,b);
    getline(cin,c);

    cout << haiku(a,b,c) << endl;

    return 0;
}