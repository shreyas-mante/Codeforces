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
		ll k=0;
		
		for(ll i=2*n;i<=4*n;i+=2)
		{
			if(k<n)
			{
				
				cout<<i<<" ";
				k++;
			}
		}
		
		cout<<endl;

 	}
}
