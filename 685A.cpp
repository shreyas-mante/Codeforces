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
		
		if(n==1)
		{
			cout<<"0"<<endl;
		}
		else if(n==2)
		{
			cout<<"1"<<endl;
		}
		else if(n==3)
		{
			cout<<"2"<<endl;
		}
		else if((n&1) == 0)
		{
			cout<<"2"<<endl;
		}
		else 
		{
			cout<<"3"<<endl;
		}
	}
}
