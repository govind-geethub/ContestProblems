// leetcode weekly 503

#include<bits/stdc++.h>
using namespace std;
class Solution 

{
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) 
    {
        int n=nums.size();
        map<int,int>freq;
        vector<int>ans;

        for(int i=0; i<n; i++)
            {
                if(freq[nums[i]]<k)
                {
                    ans.push_back(nums[i]);
                    freq[nums[i]]++;
                }
            }
        return ans;
    }
};