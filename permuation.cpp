#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void permut(string &s , int l ,int r)
{
    if(l==r)
    {
        cout<<s<<endl;
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            permut(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}
int main()
{
    //cout<<"Hello World";
    string s="abc";
    sort(s.begin(),s.end());
/*    while(next_permutation(s.begin(),s.end()))        // permutations using stl
    {
        cout<<s<<endl;
    }
    */
    int n=s.size();
    permut(s,0,n-1);                                       //permutations without stl using recursion
    return 0;
}
