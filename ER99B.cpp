#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n , res = -1 , s = 0;
		cin>>n;
		ll e= n;
		while(s<=e)
		{
			ll m = s+e>>1;
			ll k = (m*(m+1))/2;
			
			if(k>=n)
			{
				res = m;
				e = m - 1;
			}
			else
			{
				s = m + 1;
			}
			
		}
		
		if( n -((res*(res+1))/2) == -1 )
		{
			cout<<res+1<<endl;
		}
		else
		{
			cout<<res<<endl;
		}
	
	}
}
