// upsolve
// leetcode weekly

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    // to minimze use the factors of elements
    long long minArraySum(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0; i<n; i++) mpp[nums[i]]++;  // freq map

        for(int i=0; i<n; i++)
        {
            vector<int>largerFact;  // other side of sqrt(ele)
            for(int j=1; j<=sqrt(nums[i]); j++)
            {
                if(nums[i]%j!=0) continue;  // not divisible
                if(nums[i]%j==0 && mpp[j])  // divisible and in the map and minimum
                {
                    nums[i]=j;
                    break;
                }
                else largerFact.push_back(nums[i]/j);   // divisible but not checked
            }

            // checking larger factors
            while(!largerFact.empty())
            {
                int num=largerFact.back();
                largerFact.pop_back();
                if(mpp[num])
                {
                    nums[i]=min(nums[i],num);
                }
            }
        }

        long long sum=0;
        for(int i=0; i<n; i++) sum+=(long long)nums[i];
        return sum;
    }
};