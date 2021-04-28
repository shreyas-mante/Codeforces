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
		bool bzz = 0;
		bool flag = 0;
		vector<ll>a(n,0);
		ll add = 0;
		vector<ll>brr(n,0) , crr(n,0);
		ll s1 = 0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		
		for(ll i=0;i<n;i++)
		{
			s1+=a[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			if(flag)
			{
				brr[i] = a[i];
				flag = !flag;
			}
			else
			{
				brr[i] = 1;
				flag = !flag;
			}
		}
		
		flag = 1;
		
		for(ll i=0;i<n;i++)
		{
			if(flag)
			{
				crr[i] = a[i];
				flag = !flag;
			}
			else
			{
				crr[i] = 1;
				flag = !flag;
			}
		}
		
		
		
		for(ll i=0;i<n;i++)
		{
			add+= abs(arr[i] - veb[i]);
		}
		
		
		
		
		if((add*2) <= s1)
		{
			bzz = 1;
		}
		
		if(bzz)
		{
			for(auto w:brr)
			{
				cout<<w<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(auto w:crr)
			{
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}
