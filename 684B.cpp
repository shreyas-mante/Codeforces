#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll>arr(n*k);
		
		for(ll i=0;i<n*k;i++)
		{
			cin>>arr[i];
		}
		
		ll m = ceil(n/2);
		ll s = 0 , res = 0;
		
		for(ll i=n*k-1;i>=0;i--)
		{
			if(s == m)
			{
				res = res + arr[i];
				s = 0;
				k--;
			}
			else
			{
				s++;
			}
			if(k==0)
			{
				break;
			}
		}
		
		cout<<res<<endl;
	}
}
