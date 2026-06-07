#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution 
{
public:
    ll minEnergy(int n, int brightness, vector<vector<int>>& intervals) 
    {
        // merging the intervals
        sort(intervals.begin(), intervals.end());
        vector<vector<ll>>ans;
        ans.push_back({(ll)intervals[0][0], (ll)intervals[0][1]});

        for(int i=1; i<intervals.size(); i++)
            {
            if(intervals[i][0]>ans.back()[1]) 
                ans.push_back({(ll)intervals[i][0], (ll)intervals[i][1]});
                else ans.back()[1]=max(ans.back()[1], (ll)intervals[i][1]);
            }

        ll units=0;
        for(int i=0; i<ans.size(); i++)
            {
                units += (ans[i][1]-ans[i][0]+1);
            }

        ll bulbs = (brightness+2)/3;

        return units*bulbs;
    }
};