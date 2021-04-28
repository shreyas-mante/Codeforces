#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,d;
		cin>>n>>d;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		ll cnt = 0;
		
		for(ll i=0;i<n;i++)
		{
			if(v[i]<=9 || v[i]>=80)
			{
				cnt++;
			}
		}
		
		ll notrisk = abs(cnt-n);
		double ans = 0 , ans1 = 0;
		if(notrisk%d != 0)
		{
			ans = ceil(notrisk/d)+1; 
		}
		else
		{
			ans = ceil(notrisk/d);
		}
		
		if(cnt%d == 0)
		{
			ans1 = ceil(cnt/d);
		}
		else
		{
			ans1 = ceil(cnt/d)+1;
		}
		
		double ans12 = ans+ans1;
		cout<<int(ans12)<<endl;	
		
	}
}
