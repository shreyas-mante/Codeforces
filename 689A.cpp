#include<bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		for(ll i=0;i<k;i++)
		{
			cout<<"a";
		}
			
		ll ans = (n-k)/3;
		for(int i=0;i<ans;i++)
		{
			cout<<"cba";
		}
		string s="cba";	
		ll ans1=(n-k)%3;
		
		for(int i=0;i<ans1;i++)
		{
			cout<<s[i];
		}
			
		cout<<endl;	
	}
	
}
