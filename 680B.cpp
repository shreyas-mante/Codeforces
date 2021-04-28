#include<bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		
		cout<<max(a+b,c+d)<<endl;
	}
}

