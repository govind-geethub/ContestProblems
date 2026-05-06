// codechef starters 237
#include <bits/stdc++.h>
using namespace std;

int makeTriangle(int x, int y, int z)
{
    vector<int>v={x,y,z};
    sort(v.begin(), v.end());
    
    if(v[2]<(v[0]+v[1])) return 0;
    
    int req=v[2]-v[0]-v[1]+1;
    return req;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        
        cout << makeTriangle(x,y,z) << endl;
    }
    
    return 0;
}