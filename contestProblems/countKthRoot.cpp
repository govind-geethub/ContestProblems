// leetcode weekly
#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution 
{
public:
    int countKthRoots(int l, int r, int k) 
    {
        int count=0;
        if(k==1) return r-l+1;
        
        double L=floor(pow(l,1.0/k));
        double R=ceil(pow(r,1.0/k));
        //cout << L << " " << R << endl;
        
        for(ll i=L; i<=R; i++)
            {
                ll val=pow(i,k);
                if(val>=l && val<=r) count++;
            }
        return count;
    }
};