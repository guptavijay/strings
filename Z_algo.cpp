#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;                         // string and pattern matching in O(N) 
    string s,s1;
    cin>>s>>s1;
    string s2;
    vector<int> v;
    int len=s.size();
    s2.insert(0,s);                        // insert function in string takes two arguments (index at which to insert, string )
    char c='$';
    s2.push_back(c);
    s2.insert(len+1,s1);
    v.push_back(0);
    for(int i=1;i<s2.size();i++)
    {
        int cnt=0;
        int j=0;
        int k=i;
        while(s2[k]==s2[j])
        {
            j++;
            k++;
            cnt++;
        }
    v.push_back(cnt);
   
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==len)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


// algo to find whether a PATTERN is present in STRING or not.
// pattern = abc  string = abcabdabc  
//so pattern is present two times in this string
// first make a string with (pattern,$,string)
// then make Z ARRAY as per comaparisons 
// in vector if (v[i]== length of pattern) then pattern is present at that index in string.
