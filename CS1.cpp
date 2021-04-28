#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	
	ll n;
	cin>>n;
	vector<ll>v;
	ll ans = 0;
	for(ll i=0;i<n;i++)
	{
		cin>>ans;
		v.push_back(ans);
	}
	
	ll mini = *min_element(v.begin(),v.end());
	
	ll start = 0;
	
	for(ll i=0;i<v.size();i++)
	{
		if(mini == v[i])
		{
			start = i;
			break;
		}
	}
	
	ll mx = INT_MIN;
	
	for(ll i=start+1;i<v.size();i++)
	{
		mx = max(mx,v[i]);
	}
	
	ll ans1 = mx - mini;
	cout<<ans1<<endl;
}
