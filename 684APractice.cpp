#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,c0,c1,h;
		cin>>n>>c0>>c1>>h;
		string s;
		cin>>s;
		
		ll cnt0 = count(s.begin(),s.end(),'0');
		ll cnt1 = count(s.begin(),s.end(),'1');
		
		ll ans0 = cnt1 * h;
		ll ans00 = n*c0;
		ll ans000 = ans00 + ans0;
		
		ll ans1 = cnt0 *h;
		ll ans11 = n*c1;
		ll ans111 = ans11 + ans1;
		
		ll ans12 = cnt1*c1 + cnt0*c0;
		ll res = min(ans000,min(ans12,ans111));
		cout<<res<<endl;
	}
}
