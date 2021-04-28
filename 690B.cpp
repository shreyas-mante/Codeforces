#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;

    	bool fg = false;

	    if(s[0]=='2' && s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0')
		{
			fg = true;
		} 
	    if(s[0]=='2' && s[n-1]=='0' && s[n-2]=='2' && s[1]=='0')
		{
			fg = true;
		} 
	    if(s[0]=='2' && s[n-1]=='0' && s[2]=='2' && s[1]=='0')
		{
			fg = true;
		} 
	    if(s[0]=='2' && s[3]=='0' && s[2]=='2' && s[1]=='0')
		{
			fg = true;
		} 
	    if(s[n-4]=='2' && s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0')
		{
			fg = true;	
		} 
	
	
	    if(fg) 
		{
			cout<<"YES"<<endl;
		}
	    else 
		{
			cout<<"NO"<<endl;
		}
	}
}
