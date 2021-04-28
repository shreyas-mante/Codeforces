#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,c0,c1,h;
		cin>>n>>c0>>c1>>h;
		string s;
		cin>>s;
		
		ll cnt0 = 0;
		ll cnt1 = 0;
		
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='1')
			{
				cnt1++;
			}
			
			if(s[i]=='0')
			{
				cnt0++;
			}
				
		
		}
		
		ll a1 , a2 ,a3;
		
		a1 = cnt1*c1 + cnt0*c0;
		a2 = h*cnt1 + n*c0;
		a3 = h*cnt0 + n*c1;
		
		ll res = min(a1,a2);
		ll res1 = min(res,a3);
		cout<<res1<<endl;
	}
}
