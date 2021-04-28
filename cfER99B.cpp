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
		
		ll s = 0;
		ll vari = 1;
		
		while(s<n)
		{
			s = s + (vari++);
		}
		
		if(s-1 == n)
		{
			cout<<vari<<endl;
		}
		else
		{
			cout<<vari-1<<endl;
		}
	}
}
