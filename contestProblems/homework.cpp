#include<bits/stdc++.h>
using namespace std;
void homework(int l1, string a, int l2, string b, string pattern)
{
    char newWord[l1+l2+1]="";
    string Vspace="";
    string Dspace="";
    for(int i=0; i<l2; i++)
    {
        if(pattern[i]=='V') Vspace+=b[i];
        else Dspace+=b[i];
    }
    int v=Vspace.size();
    int d=Dspace.size();
    for(int i=v; i<v+l1; i++) newWord[i]=a[i-v];
    int j=0;
    for(int i=v-1; i>=0; i--) 
    {
        newWord[i]=Vspace[j];
        j++;
    }
    int k=0;
    for(int i=v+l1; i<v+l1+d; i++) 
    {
        newWord[i]=Dspace[k];
        k++;
    }
 
    cout << newWord << endl;
}
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int l1;
        cin >> l1;
        string a;
        cin >> a;
        int l2; 
        cin >> l2;
        string b;
        cin >> b;
        string pattern;
        cin >> pattern;
        homework(l1, a, l2, b, pattern);
    }
    return 0;
}