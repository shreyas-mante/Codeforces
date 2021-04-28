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
		
		ll start = 0;
		ll vr = 1;
		
		while(start<n)
		{
			start = start + (vr++);
		}
		
		if(start-1 == n)
		{
			cout<<vr<<endl;
		}
		else
		{
			cout<<vr-1<<endl;
		}
	}
}
