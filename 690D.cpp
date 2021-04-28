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
		vector<ll>v1(n+2,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v1[i];
		}
		
		ll add = 0;
		for(ll i=0;i<n;i++)
		{
			add = add + v1[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			if((add%(n-i)) != 0)
			{
				continue;
			}
			
			ll r = 0;
			ll wle = add/(n-i);
			vector<ll>vc(n+2,0);
			
			for(ll i=0;i<n;i++)
			{
				vc[i] = v1[i]; 
			}
			
			bool fg = true;
			
			for(ll j=0;j<n;j++)
			{
				if(vc[j] == wle)
				{
					continue;
				}
				else if(vc[j] > wle)
				{
					fg = false;
				}
				else if(vc[j] < wle)
				{
					r++;
					vc[j+1] += vc[j];
				}
			}
			
			fg &= (i==r);
			
			if(fg)
			{
				cout<<i<<endl;
				break;
			}
		}
		//cout<<endl;
	}
}
