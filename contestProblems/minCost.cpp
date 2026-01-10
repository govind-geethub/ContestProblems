// leetcode weekly contest 482
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) 
    {
        long long c1=(long long)need1*cost1;
        c1+=(long long)need2*cost2;
        
        long long c2=(long long)costBoth*(max(need1,need2));

        long long n=min(need1,need2);
        long long c=(long long)costBoth*n;
        if(need1>need2)
        {
            c+=(need1-need2)*(long long)cost1;
        }

        if(need2>need1)
        {
            c+=(need2-need1)*(long long)cost2;
        }

        c=min(c,c1);
        c=min(c,c2);
        return c;
    }
};