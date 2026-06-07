#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int sumOfGoodIntegers(int n, int k) 
    {
        int a=k;
        int sum=0;
        while(a!=0)
            {
                int num=n-a;
                if(num >= 0 && (n & num)==0) sum+=num;
                a--;
            }

        a=k;
        while(a!=0)
            {
                int num=n+a;
                if((n & num)==0) sum+=num;
                a--;
            }
        return sum;
    }
};