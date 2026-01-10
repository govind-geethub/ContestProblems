// codechef problems
#include <bits/stdc++.h>
using namespace std;
vector<int> scoring(int diff, int sum)
{
    int a, b;
    a=(diff+sum)/2;
    b=a-diff;
    vector<int>ans={a,b};
    return ans;
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int diff, sum; 
        cin >> diff >> sum;
        vector<int>ans=scoring(diff, sum);
        for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }
}
