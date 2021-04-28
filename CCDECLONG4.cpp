#include<bits/stdc++.h>
using namespace std;
#define ll long long int 



int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			if(((i+1)&1) != 0)
			{
				v[i] = 0 - (i+1);
			}
			else
			{
				v[i] = (i+1);
			}
		}
		
		if(n==k)
		{
			for(ll i=0;i<n;i++)
			{
				cout<<abs(v[i])<<" ";
			}
			cout<<endl;
		}
		else
		{
			ll posi = n/2;
			ll diff = abs(posi-k);
			
			if(posi < k)
			{
				ll s = 0;
				for(ll i=n-1;i>=0;i--)
				{
					if(v[i]<0)
					{
						s = i;
						break;
					}
				}
				
				for(ll i=s;i>=0;i--)
				{
					if(diff==0)
					{
						break;
					}
					if(v[i]<0)
					{
						v[i] = abs(v[i]);
						diff--;
					}
				}
				
			}
			else
			{
				ll s = 0;
				for(ll i=n-1;i>=0;i--)
				{
					if(v[i]>0)
					{
						s = i;
						break;
					}
				}
				for(ll i=s;i>=0;i--)
				{
					if(diff==0)
					{
						break;
					}
					if(v[i]>0)
					{
						v[i] = 0 - v[i];
						diff--;
					}
				}
				
				
			}
			
			for(ll i=0;i<n;i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
	}
}
