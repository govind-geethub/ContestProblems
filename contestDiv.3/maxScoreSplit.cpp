// leetcode weekly contest 482
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    long long maximumScore(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>suffix(n);
        suffix[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--)
            {
                suffix[i]=min(nums[i],suffix[i+1]);
            }
        long long prefixSum=0;
        long long maxScore=LLONG_MIN;
        for(int i=0; i<n-1; i++)
            {
                prefixSum+=nums[i];
                maxScore=max(maxScore, prefixSum-suffix[i+1]);
            }
        return maxScore;
    }
};