#include<bits/stdc++.h>
using namespace std;
void secretNumber(long long n)
{
    int count=0;
    int a=1;
    long long p= (1+(long long)pow(10,a));
    vector<long long>res;
    while(n>=p)
    {
        if(n%p==0)
        {
            long long val=n/p;
            res.emplace_back(val);
            count++;
        }
        a++;
        p=(1+(long long)pow(10,a));
    }
    cout << count << endl;
    sort(res.begin(), res.end());
    for(int i=0; i<res.size(); i++) cout << res[i] << " ";
    if(count!=0) cout << endl;
}
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        long long num;
        cin >> num;
        secretNumber(num);
    }
    return 0;
}