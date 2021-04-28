#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void merge(ll arr[], ll l, ll m, ll r)
{
	ll i=l;
	ll j=m;
	ll k=0;
	ll temp[r-l+1];
	while(i<m && j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=arr[j];
			k++;
			j++;
		}
	}
	
	while(i<m)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	
	while(j<=r)
	{
		temp[k]=arr[j];
		k++;
		j++;
	}
	
	for(ll i=l,k=0;i<=r;i++,k++)
	{
		arr[i]=temp[k];
	}
}



void merge_sort(ll arr[] ,ll l, ll r)
{
	if(l<r)
	{
		ll mid = (l+r)/2;
		merge_sort(arr,l,mid);
		merge_sort(arr,mid+1,r);
		merge(arr,l,mid+1,r);
	}
}


int main()
{
	ll n;
	cin>>n;
	ll arr[10];
	
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	merge_sort(arr,0,n-1);
	cout<<"AFTER SORTING "<<endl;
	
	for(ll i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
