#include<bits/stdc++.h>
using namespace std;

int bearFindCriminal(int n, int a, vector<int>&v)
{
    int count=0;
    vector<int>dist(n+1,0);

    for(int i=1; i<n+1; i++)
    {
        int d=abs(a-i);
        dist[d]++;
    }

    for(int d=0; d<n+1; d++)
    {
        if(dist[d]==2)
        {
            if(v[a-d]==1 && v[a+d]==1)
            {
                if(d==0) count++;
                else count+=2;
            }
        }

        else if(dist[d]==1)
        {
            if(a-d>=1 && v[a-d]==1) count++;
            else if(a+d<=n && v[a+d]==1) count++;
        }
    }

    return count;
}

int main()
{
    int n,a;
    cin >> n >> a;

    vector<int>v(n+1);
    for(int i=1; i<n+1; i++) cin >> v[i];

    cout << bearFindCriminal(n,a,v) << endl;
    return 0;
}