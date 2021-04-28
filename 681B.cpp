#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		string s;
		cin>>s;
		
		ll c = 0;
		ll ans = 0;
		ll f = -1;
		
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]=='1')
			{
				if(f == -1)
				{
					f = 0;
					c = 0;
					ans = ans +a;
				}
				else
				{
					ans = ans + min(c*b,a);
					c = 0;
				}
			}
			else
			{
				
				c++;
			}
			
		}
		
		cout<<ans<<endl;
	}
}
