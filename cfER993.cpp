#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{
	ll n;
	cin>>n;
	vector< pair<ll,ll> >v(n);
	
	for(ll i=0;i<n;i++)
	{
		cin>>v[i].first>>v[i].second;
	}
	
	for(ll i=0;i<n;i++)
	{
		cout<<v[i].first-1<<" "<<v[i].second<<endl;
	}
}
