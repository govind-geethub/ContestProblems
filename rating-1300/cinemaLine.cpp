#include<bits/stdc++.h>
using namespace std;

string cinemaLine(int n, vector<int>&v)
{
    int cash25=0, cash50=0, cashh100=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==25) cash25++;
        
        else if(v[i]==50)
        {
            if(cash25==0) return "NO";
            cash25--;
            cash50++;
        }

        else
        {
            if(cash25>0 && cash50>0)    // 25+50 rem
            {
                cash25--;
                cash50--;
            }

            else if(cash25>=3) cash25-=3;   // 25+25+25 rem
            else return "NO";
        }
    }
    return "YES";
}

int main()
{
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    cout << cinemaLine(n,v) << endl;

    return 0;
}