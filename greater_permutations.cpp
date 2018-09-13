#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  string s= "vijay";
  vector<string> v;
  while(next_permutation(s.begin(),s.end()))   // greater permutations
  {                                            // if we want all permutations os a string then first sort the string and then apply the same code
      v.push_back(s);
      cout<<s<<endl;
  }
  return 0;
}
