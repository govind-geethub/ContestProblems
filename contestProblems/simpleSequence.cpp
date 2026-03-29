// codeforces div2
#include<bits/stdc++.h>
using namespace std;

vector<int> simpleSequence(int n)
{
    vector<int>ans;
    for(int i=n; i>=0; i--) ans.push_back(i);
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

        vector<int>ans=simpleSequence(n);
        for(int i=0; i<n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}