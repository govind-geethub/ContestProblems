#include<bits/stdc++.h>
using namespace std;

int uncowedForces(vector<float>&v, vector<float>&time, float s, float u)
{
    double rating=0;

    for(int i=0; i<5; i++)
    {
        double score=500*(i+1);

        double option1=(0.3*score);
        double option2=(1 - (v[i] / 250.0)) * score - 50 * time[i];

        rating+=max(option1, option2);
    }

    rating+=(100*s);
    rating-=(50*u);
    return (int)rating;
}

int main()
{
    vector<float>v(5);
    for(int i=0; i<5; i++) cin >> v[i];

    vector<float>time(5);
    for(int i=0; i<5; i++) cin >> time[i];

    float s,u;
    cin >> s >> u;

    cout << uncowedForces(v,time,s,u) << endl;

    return 0;
}