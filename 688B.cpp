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
		vector<ll>arr(n);
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll sum = 0;
		for(ll i=1;i<n;i++)
		{
			sum = sum + abs(arr[i]-arr[i-1]);	
		}
		
		ll miin = sum - abs(arr[0]-arr[1]);
		
		miin = min(miin , sum - abs(arr[arr.size()-1] - arr[arr.size()-2]));
		ll cnt = sum;
		for(ll i=1;i<n-1;i++)
		{
			cnt = sum;
			cnt = cnt - abs(arr[i] - arr[i-1]);
			cnt = cnt - abs(arr[i] - arr[i+1]);
			cnt = cnt + abs(arr[i-1] - arr[i+1]);
			miin = min(miin , cnt);
		}
		
		cout<<miin<<endl;
	}
}
