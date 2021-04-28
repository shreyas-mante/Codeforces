#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y,n;
		cin>>x>>y>>n;
		ll cnt = 0;
		for(ll i=0;i<=n;i++)
		{
			if((i^x) < (i^y))
			{
				cnt++;
			}
		}
		
		cout<<cnt<<endl;
		
		
	}
}
