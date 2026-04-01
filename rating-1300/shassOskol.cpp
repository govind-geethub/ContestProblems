#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int>a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int m;
    cin >> m;

    while(m--)
    {
        int x,y;
        cin >> x >> y;

        x--;    // 0 indexing

        int left=y-1;
        int right=a[x]-y;

        if(x>0) a[x-1]+=left;
        if(x<n-1) a[x+1]+=right;

        a[x]=0; 
    }

    for(int i=0; i<n; i++) cout << a[i] << " ";
    return 0;
}