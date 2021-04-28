#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n,m,r,c;
		cin>>n>>m>>r>>c;
		
			ll ans1 = abs(m-r);
			ll ans = abs(r-1);
			ll ans2 = abs(n-c);
			ll ans12 = abs(c-1);
			
			cout<<max(ans1,ans) + max(ans2,ans12)<<endl;
		
		
	}
}
