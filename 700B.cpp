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
		ll A,B,n;
		cin>>A>>B>>n;
		
		
		ll a1[n];
		ll a2[n];
		
		
		for(ll i=0;i<n;i++)
		{
			cin>>a1[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			cin>>a2[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			ll ans1 = (a2[i] + (A-1))/A;
			B -= (ans1*a1[i]);
		}
		
		ll res = *max_element(a1,a1+n);
		if((B+ res)<=0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}


