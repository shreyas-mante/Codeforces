#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		
		if(((a&1) == 0) && ((b&1)==0))
		{
			ll ans = 2*((a/2) * (b/2));

			cout<<ans<<endl;
		}
		else
		{
			ll ans1 = a/2;
			ll ans2 = b/2;
			ll ans11 = abs(a - ans1);
			ll ans22 = abs(b - ans2);
			ll ans3 = ans1*ans2;
			ans3 = ans3 + (ans11*ans22);
			cout<<ans3<<endl;
		}
	}
}
