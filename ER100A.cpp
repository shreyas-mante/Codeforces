#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll ans = a+b+c;
		ll ans1 = ans/9;
		if((ans)%9 == 0 && ( ans1<=min(a,min(b,c)) ) )
		{
			cout<<"YES"<<endl;
		}
		else
		{
			
			cout<<"NO"<<endl;
		}
	}
}
