#include<bits/stdc++.h>
using namespace std;

float wizardDuel(float l, float p, float q)
{
    float t=l/(p+q);
    float d=p*t;
    return d;
}

int main()
{
    float l,p,q;
    cin >> l >> p >> q;

    cout << wizardDuel(l,p,q) << endl;

    return 0;
}
