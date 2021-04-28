#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll pw(ll b , ll wp , ll md)
{
	ll ans = 1;
	while(wp)
    {
        if(wp % 2)
        {
            ans = ans*b;
            ans%=md;
        }
        b = pow(b,2);
        b%=md;
        wp/=2;
    }
    
    return ans;
}


signed main()
{
	imback;
	nuke
	{
		ll a,b,n;
		cin>>a>>b>>n;
		
		ll ans1 = b - a;
		ll ans2 = a + b;
		ll rr = (n-1)/2;
		pair<ll,ll>p;
		ll ans = pw(2LL , rr , 1000000007LL);
		
		if((n&1))
		{
			p.first= (a*ans)%MOD;
           	p.second= (b*ans)%MOD;
		}
		else
		{
			p.first= (ans1*ans)%MOD;
           	p.second= (ans2*ans)%MOD;	
		}
		
		cout<<p.first<<" "<<p.second<<endl;
	}
}


