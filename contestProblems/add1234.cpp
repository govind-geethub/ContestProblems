// codechef starters 223
#include<bits/stdc++.h>
using namespace std;

int addTo4(int x, int y, int z)
{
    int total=0;
    total+=min(x,z);
    total+=(y/2);
    return total;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        
        cout << addTo4(x,y,z) << endl;
    }
    
    return 0;
}