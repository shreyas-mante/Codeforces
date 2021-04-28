#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll n;
	cin>>n;
	ll *arr=new ll[n];
	ll *arr2=new ll[5];
	ll arr3[5];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ll c=0;
	ll q=1;
	sort(arr,arr+n);
	
	
	for(ll i=0;i<5;i++)
	{
		c=0;
		q=1;
		for(ll j=0;j<n;j++)
		{
			if(arr[j]==i+1)
			{
				c++;
				q=0;
			}
			
		}
		if(q==0)
		{
			arr2[i]=c;
		}
		else
		{
			arr2[i]=0;
		}
	
	}

	for(int i=0;i<5;i++)
	{
		arr3[i]=arr2[i];
	}
	
	
	sort(arr2,arr2+5,greater<int>());
	ll ans=arr2[0];
	
	for(ll i=0;i<5;i++)
	{
		if(arr3[i]==ans)
		{
			cout<<i+1;
			break;
		}
	}
}
