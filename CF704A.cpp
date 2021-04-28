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
		ll p,a,b,c;
		cin>>p>>a>>b>>c;
		
		if(p%a == 0 || p%b == 0 || p%c == 0 )
		{
			cout<<"0"<<endl;
		}
		else
		{
			ll mn = min(a,min(b,c));
			if(p <= mn)
			{
				cout<<abs(p-mn)<<endl;
			}
			else
			{
				ll ans = min(a-p%a,min(b-p%b,c-p%c));
				cout<<ans<<endl;
			}
		}
	}
	
}


