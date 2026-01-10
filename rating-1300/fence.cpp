#include<bits/stdc++.h>
using namespace std;

int fence(int n, int k, vector<int>&v)
{
    // applying sliding window 
    // finding the minimum sum
    int ind=0;

    int mini=0;
    for(int i=0; i<k; i++) mini+=v[i];

    int reqSum=mini;
    for(int i=k; i<n; i++)
    {
        mini=mini+v[i]-v[i-k];
        if(mini<reqSum)
        {
            reqSum=mini;
            //  cout << reqSum << endl;
            ind=i;
            //  cout << ind << endl;
        }
    }
    //cout << reqSum << endl;
    if(ind==0) return ind+1;

    return ind-k+2;
}

int main()
{
    int n,k;
    cin >> n >> k;

    vector<int>v(n);
    for(int i=0; i<n; i++)  cin >> v[i];

    cout << fence(n,k,v) << endl;

    return 0;
}