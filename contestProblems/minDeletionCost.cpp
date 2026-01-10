// leetcode weekly contest
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    long long minCost(string s, vector<int>& cost) 
    {
        long long maxCost=0;
        unordered_map<char,long long>mpp;
        for(int i=0; i<s.size(); i++) 
        {
            mpp[s[i]]+=cost[i];
            maxCost+=cost[i];
        }

        long long minCost=LLONG_MAX;
        for(auto p:mpp)
        {
            minCost=min(minCost, maxCost-p.second);
        }
        return minCost;
    }
};