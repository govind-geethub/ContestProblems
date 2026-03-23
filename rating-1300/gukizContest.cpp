#include<bits/stdc++.h>
using namespace std;

vector<int> gukizContest(int n, vector<int>&v)
{
    vector<int>ans;
    for(int i=0; i<n; i++)
    {
        int count=0;
        for(int j=0; j<n; j++)
        {
            if(v[i]<v[j]) count++;
        }

        ans.push_back(count+1);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> ans=gukizContest(n,v);
    for(int i=0; i<n; i++) cout << ans[i] << " ";
    cout << endl;

    return 0;
}