#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		vector<ll>v1(n,0) , v2(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v1[i];
		}
		for(ll i=0;i<n;i++)
		{
			cin>>v2[i];
		}
		
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end(),greater<int>());
		ll b=1;
		for(ll i=0;i<n;i++)
		{
			if(v1[i]+v2[i]<=x)
			{
				continue;
			}
			else
			{
				b = 0;
				cout<<"NO"<<endl;
				break;
			}
		}
		
		if(b==1)
		{
			cout<<"YES"<<endl;
		}
	}
}
