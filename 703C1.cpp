#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//binarys lg
ll get_shrey(ll x , ll y)
{
	cout<<"? "<<x<<" "<<y<<endl;//ip here mkc
	cout.flush();
	ll n1;
	cin>>n1;
	return n1;
}

ll c1(ll x , ll y)
{
	if(y-x == 1)
	{
		return x;
	}
	
	ll lw = x;
	ll hg = y;
	
	while(hg-lw > 1) //low to hg
	{
		ll m = (lw+hg)/2;
		if(get_shrey(m , y) == y)
		{
			lw = m;
		}
		else
		{
			hg = m;
		}
	}
	
	return lw;
}


ll c2(ll x , ll y)
{
	if(y-x == 1)
	{
		return y;
	}
	
	ll lw = x;
	ll hg = y+1;
	
	while(hg-lw > 1)
	{
		ll m = (lw+hg)/2;
		if(get_shrey(x , m) == x)
		{
			hg = m;
		}
		else
		{
			lw = m;
		}
	}
	
	return hg;
}
signed main()
{
//	imback;
//	nuke
//	{
		ll n;
		cin>>n;
		ll x1 = get_shrey(1 , n);
		ll ans1 = -1;
		
		if(x1 != 1 and get_shrey(1 , x1) == x1 )
		{
			ans1 = c1(1 , x1);
		}
		else if(x1 != n)
		{
			ans1 = c2(x1 , n);
		}
		
		cout<<"! "<<ans1<<endl;
			
//	}
}


