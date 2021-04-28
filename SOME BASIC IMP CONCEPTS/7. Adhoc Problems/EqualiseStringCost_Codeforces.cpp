#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{
	ll n;
	cin>>n;
	string s,t;
	cin>>s;
	cin>>t;
	ll cost = 0;
	
	for(ll i=0;i<n;)
	{
		if(s[i]!=t[i])
		{
			if(i+1<n && s[i]!=s[i+1] && s[i+1]!=t[i+1])
			{
				i=i+2;
			}
			else
			{
				i++;
			}
			cost++;
		}
		else
		{
			i++;
		}
	}
	
	cout<<cost<<endl;
}
