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
		vector<ll>v(n,0);
		ll ans , s = 0;
		for(ll i=0;i<n;i++)
		{
			cin>>ans;
			s = s + ans;
			v[i] = ans;
		}
		ll c = 0;
		
		for(ll i=0;i<n-1;i++)
		{
			if(v[i]!=v[i+1])
			{
				c = 1;
			}
		}
		
		
		if(c == 0)
		{
			if(n%2==0)
			{
				cout<<s/2<<endl;
			}
			else
			{
				ll a = s - v[0];
				a = a/2;
				cout<<a+v[0]<<endl;
			}
		}
		else
		{
			if(n==1)
			{
				cout<<v[0]<<endl;
			}
			else
			{
				sort(v.begin(),v.end(),greater<ll>());
				ll a = v[0];
				ll b = v[1];
				
				for(ll i=2;i<n;i++)
				{
					if(a > b)
					{
						b = b + v[i];
					}
					else
					{
						a = a + v[i];
					}
				}
				
				if(a > b)
				{
					cout<<a<<endl;
				}
				else
				{
					cout<<b<<endl;
				}
			}
		
			 			
		}
		
	}
}
