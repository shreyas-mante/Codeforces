#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		ll arr1[n][100];
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<=31;j++)
			{
				if(((arr[i]>>j) & 1) == 0)
				{
					arr1[i][j] = 0;
				}
				else
				{
					arr1[i][j] = 1;
				}
			}
		}
		ll cnt1 = 0;
		ll cnt = x;
		for(ll i=0;i<n-1;i++)
		{
			for(ll j=0;j<=31;j++)
			{
				if(arr1[i][j] == 1 && cnt>0)
				{
					for(ll p=i;i<n;i++)
					{
						if(arr1[p][i] == 1)
						{
							arr1[p][i] = 0;
							break;
						}
						else if(p == n-1)
						{
							arr1[p][i] = 1;
						}
					}
					arr1[i][j] = 0;
					cnt--;
					if(x<=0)
					{
						break;
					}
				}
			}
		}
//		
//		for(ll i=0;i<n;i++)
//		{
//			for(ll j=0;j<=31;j++)
//			{
//				cout<<arr1[i][j];
//			}
//			cout<<endl;
//		}
		
		for(ll i=0;i<n;i++)
		{
			cnt1 = 1;
			arr[i] = 0;
			for(ll j=0;j<=31;j++)
			{
				arr[i] += (arr1[i][j]*cnt1);
				cnt1 = cnt1 * (2);
			}
		}
		
		if(x>0)
		{
			if((x%2) && n==2)
			{
				arr[n-2] = 1;
	        	arr[n-1] = (arr[n-1]^1);
			}
		}
		
		for(ll i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		
	}
}
