// leetcode weekly contest
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int mirrorDistance(int n) 
    {
        string t=to_string(n);
        reverse(t.begin(), t.end());
        int a=stoi(t);
        int ans=abs(n-a);
        return ans;
    }
};