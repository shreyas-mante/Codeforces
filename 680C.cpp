#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

long long fun(long long i , ll p,ll q)
{
	if(i==1)
		return 1;
	long long t=p;
	while(t%q==0)
		t/=i;
	return t;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    	ll p,q;
	    cin>>p>>q;
	    if(p%q)
	    cout<<p<<endl;
	    else
	    {
			ll ans=1;
	        for(ll i=1;i*i<=q;i++)
	        if(q%i==0)
	        {
	            ans=max(ans,max(fun(i,p,q),fun(q/i,p,q)));
	        }
	        cout<<ans<<endl;
	        }
	    }
}

