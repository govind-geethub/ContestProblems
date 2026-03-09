#include<bits/stdc++.h>
using namespace std;

// applying kadane's algo
// 0->1 gain so +1
// 1->0 loss so -1

int flipGame(int n, vector<int>&v)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==1) count++;
    }

    if(count==n) return count-1;

    for(int i=0; i<n; i++)
    {
        if(v[i]==1) v[i]=-1;
        else v[i]=1;
    }

    int maxSum=0, curr=0;
    for(int i=0; i<n; i++)
    {
        curr=max(v[i], curr+v[i]);
        maxSum=max(maxSum,curr);
    }

    return maxSum+count;
}

int main()
{
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    cout << flipGame(n,v) << endl;
    return 0;
}