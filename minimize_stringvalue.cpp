//geeksforgeeks solution of question minimize string value

#include <iostream>
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int k;
	    cin>>k;
	    if(k>=s.size())
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        
	    
	    map<char,int> m;
	    cpp_int sum=0;
	    map<char,int>::iterator it;
	    for(int i=0;i<s.size();i++)
	    {
	        m[s[i]]++;
	    }
	    for(int i=0;i<k;i++)
	    {
	        char c;
	        int f=INT_MIN;
	        for(it=m.begin();it!=m.end();it++)
	        {
	            if(it->second > f)
	            {
	                f=it->second;
	                c=it->first;
	            }
	        }
	        m[c]--;
	    }
	    for(it=m.begin();it!=m.end();it++)
	    {
	        cpp_int x= it->second;
	        cpp_int y=(x*x);
	        sum+=y;
	    }
	    cout<<sum<<endl;
	}
}
	return 0;
}
