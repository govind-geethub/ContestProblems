#include<bits/stdc++.h>
using namespace std;
string elephantBits(string s)
{

    int ind=-1;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            ind=i;
            break;
        }
    }

    if(ind==-1) 
    {
        s.pop_back();
        return s;
    }

    s.erase(s.begin()+ind);
    return s;
}

int main()
{
    string s;
    cin >> s;

    cout << elephantBits(s) << endl;

    return 0;
}