#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll v = 1;
		ll s = 0;
		
		while(s<n)
		{
			s = s + v;
		}
		
		if(s-1 == n)
		{
			cout<<v<<endl;
		}
		else
		{
			cout<<v-1<<endl;
		}
	}
}
