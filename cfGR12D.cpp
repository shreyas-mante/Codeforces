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
		vector<ll>arr(n,0);
		vector<ll>res(n,0);
		set<ll>s;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(ll i=0;i<n;i++)
		{
			s.insert(arr[i]);
		}
		ll st = 0;
		ll end = n-1;
		vector<ll>freq(3e5+1,0);
		
		for(ll i=0;i<n;i++)
		{
			freq[arr[i]]++;
		}
		
		for(ll i=0;i<n;i++)
		{
			if(freq[i+1] >0)
			{
				res[n-1-i] = 1;
			}
			else
			{
				break;
			}
			
			if(freq[i+1] >1)
			{
				break;
			}
			
			if(arr[st] == i+1)
			{
				st++;
			}
			else if(arr[end] == i+1)
			{
				end--;
			}
			else
			{
				break;
			}
		}
		
		if(s.size()==n)
		{
			res[0] = 1;
		}
		for(ll i=0;i<n;i++)
		{
			cout<<res[i];
		}
		cout<<endl;
			
		
		
		
	}
}
