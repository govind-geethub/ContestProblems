/*You are doing a research paper on the famous Collatz Conjecture. In your experiment, you start off with an integer x
, and you do the following procedure k
 times:

If x
 is even, divide x
 by 2
.
Otherwise, set x
 to 3⋅x+1
.
For example, starting off with 21
 and doing the procedure 5
 times, you get 21→64→32→16→8→4
.

After all k
 iterations, you are left with the final value of x
. Unfortunately, you forgot the initial value. Please output any possible initial value of x
.*/

#include<bits/stdc++.h>
using namespace std;
int collatzConjecture(int k, int x)
{
    int ans=x;
    while(k>0)
    {
        ans=ans*2;
        k--;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int k,x;
        cin >> k >> x;
        cout << collatzConjecture(k,x) << endl;
    }
    return 0;
}