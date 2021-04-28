#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n , l = 0 , r = n;
	    cin>>n;
	     
	    ll ans=-1;
	     while(l<=r)
		 {
		      ll mid=l+r>>1;
		      ll k=(mid*(mid+1))/2;
		      if(k>=n){
		       ans=mid;
		       r=mid-1;
		      }
		      else l=mid+1;
	     }
	     if(n-((ans*(ans+1))/2)==-1)cout<<ans+1<<endl;
	     else cout<<ans<<endl;

		
	}
}
