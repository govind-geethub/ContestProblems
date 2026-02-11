// codechef starters 225
#include <bits/stdc++.h>
using namespace std;

string plusMinusSplit(int n, vector<int>&v)
{
    unordered_set<int>st;
    for(int i=0; i<n; i++)
    {
        int a=abs(v[i]);
        st.insert(a);
    }

    if(st.size()==1) return "Yes";
    return "No";
}

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int>a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        cout << plusMinusSplit(n,a) << endl;
    }

    return 0;
}
