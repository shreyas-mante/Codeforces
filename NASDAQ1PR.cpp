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
		string s;
		cin>>s;
		ll cnt = 1;
		ll ans = INT_MIN;
		for(ll i=0;i<n-1;i++)
		{
			if(s[i]==s[i+1])
			{
				cnt++;
			}
			else
			{
				ans = max(ans,cnt);
				cnt = 1;
			}
		}
		
		ll cnt1 = 0;
		ll ans1 = INT_MIN;
		for(ll i=0;i<n-1;i++)
		{
			if(s[i]==s[i+1])
			{
				cnt1++;
			}
			else
			{
				ans1 = max(ans1,cnt1);
				cnt1 = 0;
			}
		}
		
		if(t==)
	}
}
