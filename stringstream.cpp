#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    char ch[1000];
    cin.getline(ch,1000);
    stringstream ss(ch);   // breaking of string into words
    string word;              // using stringstream
    while(ss>> word)
    {
        cout<<word<<endl;
    }
    // put a number into string using stringstream
    int x=100;
    stringstream sss;
    sss<<x;               // number into string
    string s2= sss.str();  // string that contains number
    cout<<s2<<endl;
  return 0;
}
