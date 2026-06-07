#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    bool consecutiveSetBits(int n) 
    {
        int count=0;
        while(n > 1)
            {
                if((n & 3) == 3)
                {
                    count++;
                    if(count > 1) return false;
                }
                n = n >> 1;
            }
        if(count==1) return true;
        return false;
    }
};