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
		vector<ll> vec(n,0);
		vector<ll>::iterator upt;
		for(ll i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		sort(vec.begin(),vec.end());
		ll c=0;
  		for(ll i=0;i<n-2;i++)
		  {
			   upt = upper_bound(vec.begin()+i, vec.end(), vec[i]+2);
			   ll ans = upt - vec.begin();
			   if(ans == n)
			   {
				    if(vec[n-1] <= vec[i]+2)
					{
				     ans -= (i+1);
				    c += (ans*(ans-1))/2;
				    }
			   }
			   else
			   {
				    ans -= (i+1);
				    c += (ans*(ans-1))/2;
			   }
		}
			  cout<<c<<endl;
		
	}
}
