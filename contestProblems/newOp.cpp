// codechef starters 219
#include<bits/stdc++.h>
using namespace std;
vector<int> newOperation(int n, vector<int>&v)
{
    vector<int>a(n);    // temp array
    for(int i=0; i<n; i++) a[i]=v[i];

    vector<int>ans;

    // min value
    while(v.size()>=2)
    {
        int x=v[0]+(2*v[1]);

        v.erase(v.begin());
        v.erase(v.begin());

        v.insert(v.begin(), x);
    }
    ans.push_back(v[0]);

    // max value
    while(a.size()>=2)
    {
        int x=a[a.size()-2]+(2*a[a.size()-1]);

        a.erase(a.end()-1);
        a.erase(a.end()-1);

        a.insert(a.end(), x);
    }
    ans.push_back(a[0]);

    return ans;
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

        vector<int>ans=newOperation(n,v);
        for(int i=0; i<2; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}