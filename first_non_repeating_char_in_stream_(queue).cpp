#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--)
	{
	    int len;
	    cin>>len;
	    string s;
	    for(int i=0;i<len;i++)
	    {
	        char c;
	        cin>>c;
	        s.push_back(c);
	    }
	    queue<char> q;
	    map<char,int> mp;
	   
	    for(int i=0;i<s.size();i++)
	    {
	        q.push(s[i]);
	        mp[s[i]]++;
	        while(!q.empty())
	        {
	            char c= q.front();
	            if(mp[c]>1)
	            {
	                q.pop();
	            }
	            else
	            {
	                cout<<c<<" ";
	                break;
	            }
	        }
	        if(q.empty()==true)
	        {
	            cout<<"-1"<<" ";
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}
