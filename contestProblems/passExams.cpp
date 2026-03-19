#include<bits/stdc++.h>
using namespace std;

string passingExam(int x, int y, int z)
{
    int count=0;
    if(x>=50) count++;
    if(y>=50) count++;
    if(z>=50) count++;
    
    if(count>=2) return "Yes";
    return "No";
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        
        cout << passingExam(x,y,z) << endl;
    }
    return 0;
}