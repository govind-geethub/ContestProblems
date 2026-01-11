#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    
    bool check(vector<int>&v, int sum)
    {
        for(int i=0; i<v.size(); i++)
            {
                if(sum==v[i]) return true;
            }
        return false;
    }
    
    int sum(vector<int>&v)
    {
        int sum=0;
        for(int i=0; i<v.size(); i++) sum+=v[i];

        return sum;
    }
    
    int centeredSubarrays(vector<int>& nums) 
    {
        int n=nums.size();
        int count=0;
        
        for(int i=0; i<n; i++)
            {
                vector<int>sub;
                for(int j=i; j<n; j++)
                    {
                        sub.push_back(nums[j]);
                        int x=sum(sub);
                        
                        if(check(sub,x)) count++;
                        // cout << count << endl;
                    }
            }

        return count;
    }
};