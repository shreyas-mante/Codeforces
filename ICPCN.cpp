#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
	nuke
	{
		ll c[3];
		ll arr[5];
		for(ll i=0;i<3;i++)
		{
			cin>>c[i];
		}
		
		for(ll i =0 ;i<5;i++)
		{
			cin>>arr[i];
		}
		if(arr[0]>c[0]   || arr[1]>c[1]  || arr[2]>c[2]  )
		{
			cout<<"NO"<<endl;	
		}
		else
		{
			if(c[0] != 0)
			{
				c[0] = c[0] - arr[0];
			}
			else
			{
				c[2] = c[2] - arr[0];
			}
			
			if(c[1] != 0)
			{
				c[1] = c[1] - arr[1];
			}
			else
			{
				c[2] = c[2] - arr[1];
			}
				
			if(c[2] == 0 && arr[2] != 0)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				c[2] -= arr[2];
			}
			if(c[0] < arr[3])
			{
				arr[3] -= c[0];
				c[0] = 0;
			}
			else
			{
				c[0] -= arr[3];
				arr[3] = 0;
			}
			if(c[1] < arr[4])
			{
				arr[4] -= c[1];
				c[1] = 0;
			}
			else
			{
				c[1] -= arr[4];
				arr[4] = 0;
			}
			if(c[2]<arr[3]+arr[4])
			{
				cout<<"NO"<<endl;
			}		
			else
			{
				if(c[2]>=0 && c[1]>=0 &&c[0]>=0)
				{
					cout<<"YES"<<endl;	
				}
				
				else
				{
					cout<<"NO"<<endl;
				}
			}
			
			
		}
	}
}

