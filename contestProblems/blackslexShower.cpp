// upsolve codeforces div3
#include<bits/stdc++.h>
using namespace std;

int blackslexShower(int n, vector<int>&v)
{
    int time=0;
    for(int i=1; i<n; i++)
    {
        time+=abs(v[i]-v[i-1]);
    }

    int start=abs(v[0]-v[1]);   
    int end=abs(v[n-1]-v[n-2]);

    int minTime=min(time-start, time-end);  // comparing for 0 adn n-1th index

    // if one is removed then two times deleted are: i-(i+1)  i-(i-1)
    // one added (i-1)-(i+1)
    for(int i=1; i<n-1; i++)
    {
        minTime= min(minTime,time-abs(v[i]-v[i-1])-abs(v[i]-v[i+1])+abs(v[i+1]-v[i-1]));
    }

    return minTime;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        cout << blackslexShower(n,v) << endl;
    }
    return 0;
}