// codechef 218
#include<bits/stdc++.h>
using namespace std;

pair<int,int> mini(int n, vector<int>&v, vector<int>&t)
{
    int m=INT_MAX;
    int ind=-1;
    
    for(int i=0; i<v.size(); i++)
    {
        if(m>t[i]) 
        {
            ind=i;
            m=t[i];
        }
    }

    return {ind,m};
}

int delArrAgain(int n, vector<int>&v, vector<int>&t)
{
    int minCost=0;
    
    while(v.size()!=0)
    {
        pair<int,int>p=mini(n,v,t);

        int cost=(v[p.first]*p.second);
        minCost+=cost;

        int ind=p.first;
        v.erase(v.begin()+ind);
    }
    
    return minCost;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        vector<int>t(n);
        for(int i=0; i<n; i++) cin >> t[i];

        cout << delArrAgain(n,v,t) << endl;
    }
    
    return 0;
}