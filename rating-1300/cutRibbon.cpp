#include<bits/stdc++.h>
using namespace std;

// using equation: ax + by + cz = 0
int cutRibbon(int n, int a, int b, int c)
{
    int maxi=0;
    for(int i=0; i<=4000; i++)
    {
        for(int j=0; j<=4000; j++)
        {
            int m=i*a;
            int p=j*b;
            int o=(n-m-p);      // o can be -ve 
            if(o>=0 && o%c==0)  // condition added
            {
                maxi=max(maxi,(i+j+(o/c)));
            }
        }
    }
    return maxi;
}

int main()
{
    int n,a,b,c;
    cin >> n >> a >> b >> c;

    cout << cutRibbon(n,a,b,c) << endl;

    return 0;
}