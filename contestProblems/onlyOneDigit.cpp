#include<bits/stdc++.h>
using namespace std;
int onlyOneDigit(int num)
{
    int cNum=0;
    unordered_set<int>digit;
    while(num>0)
    {
        cNum=num%10;
        digit.insert(cNum);
        num/=10;
    }
    int minDigit=INT_MAX;
    for(int x:digit)
    {
        if(x<minDigit) minDigit=x;
    }
    return minDigit;
}
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        cout << onlyOneDigit(v[i]) << endl;
    }
    return 0;
}