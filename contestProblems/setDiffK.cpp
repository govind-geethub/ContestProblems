#include<bits/stdc++.h>
using namespace std;

string setDiffK(int n, int k, vector<int>&v)
{
    vector<int>s;
    for(int i=0; i<n; i++)
    {
        if(v[i]==1) s.push_back(i+1);
    }

    // for(int i=0; i<s.size(); i++) cout << s[i] <<  " ";
    // cout << endl;

    if(s.size()==0) return "No";

    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<n; j++)
        {
            // v[j]==1 if distance not > k return no
            if(v[j]==1 && (j+1)!=s[i] && abs((j+1)-s[i])<=k) 
            {
                //cout << j << endl;
                return "No";
            }

            if(v[j]==0)
            {
                // v[j]=0 check for number which could be possible in s
                // if possible but not in s return no

                bool check=false;
                for(int a=0; a<s.size(); a++)
                {
                    // checking for all s[i]
                    if(abs(s[a]-(j+1))<=k)
                    {
                        check=true;
                        break;
                    }
                }

                if(!check) return "No";
            }
        }
    }

    return "Yes";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,k;
        cin >> n >> k;

        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        cout << setDiffK(n,k,v) << endl;
    }
    return 0;
}