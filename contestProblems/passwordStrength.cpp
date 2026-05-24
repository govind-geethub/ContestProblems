// leetcode weekly 503

#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int passwordStrength(string password) 
    {
        int point=0;
        unordered_set<char>st;
        for(int i=0; i<password.length(); i++)  st.insert(password[i]);

        vector<char>v(st.begin(), st.end());
        for(int i=0; i<v.size(); i++)
            {
                if(v[i]>='a' && v[i]<='z') point+=1;
                else if(v[i]>='A' && v[i]<='Z') point+=2;
                else if(v[i]>='0' && v[i]<='9') point+=3;
                else if(v[i]=='!' || v[i]=='@' || v[i]=='#' || v[i]=='$') point+=5;
            }
        return point;
    }
};