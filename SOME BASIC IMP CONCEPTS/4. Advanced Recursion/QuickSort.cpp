#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll partition(ll arr[], ll l , ll r)
{
	ll pivot = arr[l];
	ll count = 0;
	
	for(ll i=l+1;i<=r;i++)
	{
		if(arr[i]<=pivot)
		{
			count++;
		}
	}
	
	ll pivotIndex = count + l;
	swap(arr[l],arr[pivotIndex]);
	
	ll i=l;
	ll j=r;
	
	while(i<pivotIndex && j>pivotIndex)
	{
		if(arr[i]<=pivot)
		{
			i++;
		}
		else if(arr[j]>pivot)
		{
			j--;
		}
		else
		{
			swap(arr[i],arr[j]);
		}
		
	}
	
	return pivotIndex;
	
}


ll quick_sort(ll arr[] , ll l, ll r)
{
	if(l<r)
	{
		ll p = partition(arr,l,r);
		quick_sort(arr,l,p-1);
		quick_sort(arr,p+1,r);
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
	
	quick_sort(arr,0,n-1);
	cout<<"AFTER SORTING "<<endl;
	
	for(ll i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
