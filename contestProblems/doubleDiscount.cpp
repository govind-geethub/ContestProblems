// codechef starters 231
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int doubleDiscount(int n, int k, vector<int>&a, vector<int>&b)
{
    int maxTaste=0;
    for(int i=0; i<n; i++)
    {
        int taste=0;
        int totalCost=0;

        for(int j=i+1; j<n; j++)
        {
            int c1=max(a[i], a[j]);
            int c2=min(a[i], a[j]);

            //cout << c1 << " " << c2 << endl;

            if(c1>=100)
            {
                int c=max(c1/2, c1-100);

                //cout << c << endl;

                totalCost=c+c2;
                //cout << totalCost << endl;

                taste=b[i]+b[j];

                if(totalCost>k) continue;
                maxTaste=max(taste, maxTaste);
            }

            totalCost=(c1/2)+c2;
            //cout << totalCost << endl;

            if(totalCost>k) continue;

            taste=b[i]+b[j];
            maxTaste=max(taste, maxTaste);
        }
    }

    return maxTaste;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,k;
        cin >> n >> k;

        vector<int>a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<int>b(n);
        for(int i=0; i<n; i++) cin >> b[i];

        cout << doubleDiscount(n,k,a,b) << endl;
    }
    return 0;
}