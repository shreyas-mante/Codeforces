#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imbackkk ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	
	imbackkk;
	nuke
	{
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll e = 0;
		ll o = 0;
		for(ll i=0;i<n;i++)
		{
			if(arr[i] % 2 == 0)
			{
				e++;
			}
			else
			{
				o++;
			}
		}
		
		if(o%2)
		{
			cout<<"2"<<endl;
		}
		else
		{
			cout<<"1"<<endl;
		}
	}
}


