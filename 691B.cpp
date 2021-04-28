#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
//	nuke
//	{
		ll n;
		cin>>n;
		
		if(n&1 == 1)
		{
			ll cr = (n + 1) / 2;
	        ll ans1 = 2*cr*(cr + 1);
	        cout <<ans1<<endl;
		}
		else
		{
			ll cr = (n/2.0) + 1;
        	ll ans1 = cr*cr;
        	cout<<ans1<<endl;
		}
        
    
//	}
}

