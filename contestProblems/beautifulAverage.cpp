#include<bits/stdc++.h>
using namespace std;
int beautifulAvg(int n, vector<int>&v)
{
    int avg=INT_MIN;
    int currAvg=INT_MIN;
    for(int i=0; i<n; i++)
    {
        vector<int>a;
        for(int j=i; j<n; j++)
        {
            a.emplace_back(v[j]);
            int sum=0;
            for(int k=0; k<a.size(); k++)
            {
                sum+=a[k];
            }
            //cout << sum << endl;
            currAvg=sum/a.size();
            //cout << currAvg << endl;
            avg=max(currAvg, avg);
            //cout << avg << endl;
        }
    }
    return avg;
}
int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        cout << beautifulAvg(n,v) << endl;
        t--;
    }
    return 0;
}