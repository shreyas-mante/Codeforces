#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,c;
		cin>>n>>c;
		ll arr[100025];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		sort(arr,arr+n);
		
		ll low=0,high=arr[n-1],mid,best=0;
		while(low<=high)
		{
			ll left=0,cnt=1;
			mid=(low+high)/2;
			for(ll i=1;i<n && cnt <c ;i++)
			{
				if(arr[i]-arr[left] >=mid)
				{
					left=i;
					cnt++;
				}
			}
			
			if(cnt >=c)
			{
				best=mid;
				low=mid+1;
			}
			else
			{
				high = mid-1;
			}
		}
		cout<<best<<endl;
	}
}
