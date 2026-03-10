#include<bits/stdc++.h>
using namespace std;
#define ll long long

void arraySort(ll n, vector<ll>&v)
{
    vector<ll>temp(v.begin(), v.end());
    sort(temp.begin(), temp.end());

    vector<ll>t;    // having unsorted element indices
    for(int i=0; i<n; i++)
    {
        if(temp[i]!=v[i]) t.push_back(i);
    }

    if(t.size()==0) // if empty then already sorted
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return;
    }

    reverse(v.begin()+t[0], v.begin()+t[t.size()-1]+1); // checking if reversing will work or not
    // for(int i=0; i<n; i++) cout << v[i] << " ";

    for(int i=0; i<n; i++)
    {
        if(temp[i]!=v[i])
        {
            cout << "no" << endl;
            return;
        }
    }

    cout << "yes" << endl;
    cout << t[0]+1 << " " << t[t.size()-1]+1 << endl;
}

int main()
{
    ll n;
    cin >> n;

    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    arraySort(n,v);

    return 0;
}