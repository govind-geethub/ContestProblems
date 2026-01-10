#include<bits/stdc++.h>
using namespace std;
int suspension(int n, int y, int r)
{
    int suspend=0;
    suspend+=r;
    if(suspend!=n) suspend+=y/2;
    if(suspend>n) while(suspend!=n) suspend--;
    return suspend;
}
int main()
{
    int k;
    cin >> k;
    while(k--)
    {
        int n, y, r;
        cin >> n >> y >> r;
        cout << suspension(n,y,r) << endl;
    }
    return 0;
}