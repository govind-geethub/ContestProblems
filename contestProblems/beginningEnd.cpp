// codechef starters 239
#include <bits/stdc++.h>
using namespace std;

int beginEnd(int n, vector<int>&v)
{
    int moves=INT_MAX;
    vector<int>freq(101);
    for(int i=1; i<=n; i++) freq[v[i]]++;
    
    bool flag=false;
    for(int i=1; i<=n; i++)
    {
        if(freq[v[i]]>=2)
        {
            flag=true;
            break;
        }
    }
    
    if(flag==false) return -1;
    
    if(v[1]==v[n]) return 0;
    
    vector<pair<int,int>> temp;
    for(int i=1; i<=n; i++)
    {
        if(freq[v[i]]>=2)temp.push_back({v[i],i});
    }
    sort(temp.begin(), temp.end());
    
    int ind=0;
    while(ind<temp.size())
    {
        int ind1=ind;
        while(ind+1<temp.size() && temp[ind+1].first==temp[ind].first) ind++;
        moves=min(moves, (temp[ind1].second-1)+(n-temp[ind].second));
        ind++;
    }
    
    return moves;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int>v(n+1);
        for(int i=1; i<=n; i++) cin >> v[i];
        
        cout << beginEnd(n,v) << endl;
    }
    
    return 0;
}
