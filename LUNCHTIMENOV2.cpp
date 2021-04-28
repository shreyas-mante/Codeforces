#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	
	ll n;
	cin>>n;
	vector<ll>v1(n,0) , v2(n,0);
	vector< pair<ll,ll> > arr(n);
	
	for(ll i=0;i<n;i++)
	{
		cin>>v1[i];
	}
	
	for(ll i=0;i<n;i++)
	{
		cin>>v2[i];
	}
	
	for(ll i=0;i<n;i++)
	{
		arr[i].second = v1[i];
	}
	
	for(ll i=0;i<n;i++)
	{
		arr[i].first = v2[i];
	}
	
	sort(arr.begin(),arr.end());
	ll sum = 0;
	
	for(auto i:arr)
	{
		if(i.second >=n)
		{
			sum = sum + i.first * n;
			n = 0;
		}
		else
		{
			sum = sum + (i.first * i.second);
			n = n - i.second;
		}
		
		if(n<=0)
		{
			break;
		}
		
	}
	
	cout<<sum<<endl;
	
	
	
	
}
