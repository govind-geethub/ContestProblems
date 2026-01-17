// biweekly contest 174
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) 
    {
        int quality=INT_MIN;
        for(int i=0; i<towers.size(); i++)
            {
                int x=abs(towers[i][0]-center[0]);
                int y=abs(towers[i][1]-center[1]);
                
                int a=x+y;
                //cout << a << endl;
                
                if(a<=radius) quality=max(towers[i][2],quality);
                //cout << quality << endl;
            }

        if(quality==INT_MIN) return {-1,-1};

        vector<int>ans={INT_MAX,INT_MAX};
        for(int i=0; i<towers.size(); i++)
            {
                int x=abs(towers[i][0]-center[0]);
                int y=abs(towers[i][1]-center[1]);
                
                int a=x+y;
                if(a<=radius && towers[i][2]==quality)
                {
                    if(towers[i][0]<ans[0] || towers[i][0]==ans[0] && towers[i][1]<ans[1])
                    {
                        ans={towers[i][0],towers[i][1]};
                    }
                }
            }
        return ans;
    }
};