#include<bits/stdc++.h>
using namespace std;

int nicholasPermute(int n, vector<int>&v)
{
    int mini=min_element(v.begin(), v.end())-v.begin();
    int maxi=max_element(v.begin(), v.end())-v.begin();

    //cout << mini << " " << maxi << endl;

    int ans=max({mini, n-1-mini, maxi, n-1-maxi});
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    cout << nicholasPermute(n,v) << endl;
    return 0;
}