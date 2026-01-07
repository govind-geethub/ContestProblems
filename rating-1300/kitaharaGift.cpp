#include<bits/stdc++.h>
using namespace std;

string kitaharaGift(int n, vector<int>&v)
{
    int h=0, t=0;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==100) h++;
        else t++;
        sum+=v[i];
    }

    if(sum%200!=0) return "NO";
    int half=sum/2;

    if(half%200==100 && h==0) return "NO";
    return "YES";
}

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    cout << kitaharaGift(n,v) << endl;
    return 0;
}