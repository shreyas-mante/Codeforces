#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{
	ll n;
	cin>>n;
	ll cnt = 0;
	for(ll j=1;j<=n;j++)
	{
		for(ll i=j+1;i<=n;i++)
		{
			if( ( ((j+1)*i) % (j-i) ) == 0)
			{
				cnt++;
			}
		}
	}
	
	cout<<cnt<<endl;
}
