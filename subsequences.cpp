#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    //v.push_back(0);
    v.push_back(3);
   // int k=2;
    int n=v.size();
    int l= pow(2,n);
    for(int i=1;i<l;i++)
    {
      for(int j=0;j<n;j++)
      {
          if(i & (1<<j))
          {
              cout<<v[j]<<" ";
          }
      }
      cout<<endl;
    }
    return 0;
}
