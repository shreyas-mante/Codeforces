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
		ll n;
		cin>>n;
		
		ll arr[5] = {2,4,16,256,65536};
		ll n1 = 0;
		for(ll i=0;i<5;i++)
		{
			if(n>=arr[i])
			{
				n1++;
				continue;
			}
			else
			{
				break;
			}
		}
		
		ll res = (n-2)+n1;
		ll check = 0;
		
		for(ll i=0;i<5;i++)
		{
			if(n == arr[i])
			{
				check = 1;
			}
		}
		
		if(check)
		{
			res--;
		}
		cout<<res<<endl;// wait to check
		
		for(ll i=n-1;i>=3;i--)
		{
			ll ck = 0;
			for(ll j=1;j<5;j++)
			{
				if(i == arr[j])
				{
					ck = 1;
				}
			}
			
			if(ck)
			{
				continue;
			}
			
			cout<<i<<" "<<n<<endl;
		}
		
		for(ll i=0;i<5;i++)
		{
			if(n == arr[i])
			{
				check = 1;
			}
		}
		
		n1--;
		
		if(!check)
		{
			cout<<n<<" "<<arr[n1]<<endl;
			cout<<n<<" "<<arr[n1]<<endl;
		}
		
		for(ll i=n1;i>=1;i--)
		{
			cout<<arr[i]<<" "<<arr[i-1]<<endl;
			cout<<arr[i]<<" "<<arr[i-1]<<endl;
		}
		
	}
}

