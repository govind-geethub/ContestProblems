#include<bits/stdc++.h>
using namespace std;
#define ll long long

string lever(string s)
{
    ll n=s.length();
    // pivot index
    ll ind=-1;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='^')
        {
            ind=i;
            break;
        }
    }

    // torque calc.
    ll leftTorque=0, rightTorque=0;
    ll wt=0, dist=0;

    for(ll i=0; i<n; i++)
    {   
        if(s[i]>='0' && s[i]<='9')
        {
            wt=s[i]-'0';
            dist=abs(ind-i);

            //cout << wt << " " << dist << endl;
            if(i<ind) leftTorque+=(wt*dist);
            if(i>ind) rightTorque+=(wt*dist);
        }
    }

    //cout << leftTorque << " " << rightTorque << endl;

    if(leftTorque>rightTorque) return "left";
    else if(leftTorque<rightTorque) return "right";
    return "balance";
}

int main()
{
    string s;
    cin >> s;

    cout << lever(s) << endl;
    return 0;
}