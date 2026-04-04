#include<bits/stdc++.h>
using namespace std;

int integer67th(vector<int>&v)
{
    int sum=0;
    int maxi=max_element(v.begin(), v.end())-v.begin();

    for(int i=0; i<7; i++)
    {
        if(i==maxi) sum+=v[maxi];

        else
        {
            int temp=v[i]*(-1);
            sum+=temp;
        }
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<int>v(7);
        for(int i=0; i<7; i++) cin >> v[i];

        cout << integer67th(v) << endl;
    }
    return 0;
}