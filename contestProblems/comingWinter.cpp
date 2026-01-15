// codechef starters 221
#include<bits/stdc++.h>
using namespace std;

int comingWinter(int n, int a, int b, vector<int>&v)
{
    int count=0;
    bool wear=false;
    for(int i=0; i<n; i++)
    {
        if(v[i]<a && wear==false) 
        {
            count++;
            wear=true;
        }
        if(v[i]>b) wear=false;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;

        vector<int>temp(n);
        for(int i=0; i<n; i++) cin >> temp[i];

        cout << comingWinter(n,a,b,temp) << endl;
    }

    return 0;
}