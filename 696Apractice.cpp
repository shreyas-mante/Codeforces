#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
	nuke
	{
		ll n;
		cin>>n;
		char arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		char arr1[n];
		arr1[0] = '1';
		for(ll i=1;i<n;i++)
		{
			if(arr[i-1] == '1' && arr[i] == '0')
			{
//				if(arr1[i-1] == '1' || arr1[i-1] == '0')
//				{
					arr1[i] = '1';
//				}
			}
			else if(arr[i-1] == '0' && arr[i] == '1' )
			{
//				if(arr1[i-1] == '0' || arr1[i-1] == '1')
//				{
					arr1[i] = '1';
//				}
				
			}
			else if(arr[i-1] == '1' && arr[i] == '1' )
			{
				if(arr1[i-1] == '1')
				{
					arr1[i] = '0';
				}
				else
				{
					arr1[i] = '0';
				}	
			}
			else if(arr[i-1] == '0' && arr[i] == '0')
			{
				arr1[i] = '0';
			}
		}
		
		for(ll i=0;i<n;i++)
		{
			cout<<arr1[i];
		}
		cout<<endl;
	}
}


