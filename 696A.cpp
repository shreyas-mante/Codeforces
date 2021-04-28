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
		char b[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>b[i];
		}
		
		char a[n];
		
		
		for(ll i=0;i<n;i++)
		{
			if(i == 0)
			{
				a[0] = '1';
			}
			else
			{
				if(b[i] == '1' && (a[i-1] == '1' && b[i-1] == '1'))
				{
					a[i] = '0';
				}
				else
				{
					if((a[i-1] == '1' && b[i-1] == '0') && b[i] == '0' || (a[i-1] == '0' && b[i-1] == '1') && b[i] == '0')
					{
						a[i] = '0';
					}
					else
					{
						a[i] = '1';
					}
				}
			}
		}
		
		for(ll i=0;i<n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		
	}
}


