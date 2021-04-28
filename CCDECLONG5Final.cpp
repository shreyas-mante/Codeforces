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
		ll ans = 0;
		ll ans1 = 1;
		ll arr1[n][100];
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<=31;j++)
			{
				if(((arr[i]>>j) & 1) == ans1^1)
				{
					arr1[i][j] = ans1^1;
				}
				else
				{
					arr1[i][j] = ans^1;
				}
			}
		}
		ll cnt1 = 0;
		ll cnt = x;
		
		for(ll i=0;i<n-1;i++)
		{
			for(ll j=0;j<=31;j++)
			{
				if(arr1[i][j] == ans^1 && cnt>0)
				{
					for(ll p=i+1;p<n;p++)
					{
						if(arr1[p][j] == ans^1)
						{
							arr1[p][j] = ans1^1;
							break;
						}
						else if(p == n-1)
						{
							arr1[p][j] = ans^1;
						}
					}
					arr1[i][j] = ans1^1;
					cnt--;
					if(cnt<=0)
					{
						break;
					}
				}	
			}
			if(cnt<=0)
			{
				break;
			}
		}

		
		for(ll i=0;i<n;i++)
		{
			cnt1 = 1;
			arr[i] = 0;
			for(ll j=0;j<=31;j++)
			{
				arr[i] += (arr1[i][j]*cnt1);
				cnt1 = cnt1 * (1<<1);
			}
		}
		
		if(cnt>0)
		{
			if(cnt%2 && n==2)
			{
				arr[n-2] = ans^1;
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
