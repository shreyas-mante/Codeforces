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
		
		ll x[n],y[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>x[i]>>y[i];	
		}
		ll cnt = 0;
		for(ll i=0;i<n;i++)
		{
			cnt = 0;
			for(ll j=0;j<n;j++)
			{
				if(i==j)
				{
					continue;
				}
				ll dis = abs(x[i]-x[j]) + abs(y[i]-y[j]);
				if(dis <=k)
				{
					cnt++;
				}
				
				if(cnt==n-1)
				{
					goto a;
				}
			}
		}
		a:
		if(cnt == n-1)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
}
