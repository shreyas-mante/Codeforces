#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll d,k;
		cin>>d>>k;
		ll x = 0;
		ll y = 0;
		ll c = 0;
		while(x<d && (pow(x,2)+pow(y,2) <= pow(d,2)))
		{
			c++;
			x = x + k;	
		}
		
		if((c&1) == 0)
		{
			cout<<"Utkarsh"<<endl;
		}
		else
		{
			cout<<"Ashish"<<endl;
		}
		
		
		
	}
}
