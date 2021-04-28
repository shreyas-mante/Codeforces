#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll n,p;
	cin>>n>>p;
	
	map<ll,ll>mp;
	map<ll,ll>::iterator it;
	set<ll>s;
	
	for(ll i=0;i<p;i++)
	{
		ll a , b;
		cin>>a>>b;
		s.insert(a);
		s.insert(b);
		mp[a]++;
		mp[b]++;
	}
	
	map<ll,ll>mp1;
	map<ll,ll>::iterator it1;
	
	for(it1=mp.begin();it1!=mp.end();it1++)
	{
		mp1[it1->second]++;
	}
	ll ans = mp1.size();
	ll ans1 = s.size();
	ll i = 0;
	for(ll i=0;i<n;i++)
	{
		s.insert(i);
	}
	ll ans2 = s.size();
	ll ans3 = abs(ans1-ans2);
	ans = ans + ans3;
	
	cout<<ans<<endl;
	
	
}
