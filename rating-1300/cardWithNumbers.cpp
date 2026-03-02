#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<pair<ll,ll>> cardsWithNumbers(vector<ll>& v)
{
    ll n = v.size();

    unordered_map<ll,ll> mpp;
    for(ll i = 0; i < n; i++)   mpp[v[i]]++;

    for(ll i = 0; i < n; i++)
    {
        if(mpp[v[i]]%2 !=0) return {};
    }

    vector<pair<ll,ll>> arr;
    for(ll i = 0; i < n; i++)   arr.push_back({v[i], i+1});

    sort(arr.begin(), arr.end());

    vector<pair<ll,ll>> result;
    for(ll i = 0; i < n; i += 2)    result.push_back({arr[i].second, arr[i+1].second});

    return result;
}

int main()
{
    FILE *fp;

    fp = fopen("input.txt", "r");   // input file

    ll n;
    fscanf(fp, "%lld", &n);

    vector<ll> v(2*n);
    for(ll i=0; i<2*n; i++) fscanf(fp, "%lld", &v[i]);

    fclose(fp);

    vector<pair<ll,ll>>res=cardsWithNumbers(v);

    fp = fopen("output.txt", "w");  // output file

    if(res.empty())
    {
        fprintf(fp, "-1\n");
    }

    else
    {
        for(ll i=0; i<res.size(); i++)  fprintf(fp, "%lld %lld\n", res[i].first, res[i].second);
    }

    fclose(fp);

    return 0;
}