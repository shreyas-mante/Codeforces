#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll c=0;
		vector<ll>v(n);
		ll arr[100025];
		vector<ll>::iterator od;
		
		for(ll i=0;i<n;i++)
		{
			
			cin>>v[i];
		}
		
		sort(v.begin(),v.end());
		
		od = lower_bound(v.begin(),v.end(),x);
		ll lwrb = od-v.begin();
		
		for(ll i=lwrb;i<n;i++)
		{
			if(x<v[i])
			{
				while(x<v[i])
	            {
	                x = 2*x;
	                c++;
	            }
            c++;
			}
			else
			{
				c++;
	        	
			}
			x = 2*v[i];	
		}
		
		ll ans = lwrb+c;
		
		if(lwrb!=0)
		{
			c=0;
			lwrb--;
			
			for(ll i=lwrb;i<n;i++)
			{
				
				if(x<v[i])
                {
                    while(x<v[i])
                    {
                        x = 2*x;
                        c++;
                    }
                    
                    c++;
                }
                else
                {
                	c++;
                		
				} 
				x = 2*v[i];	 
			}
			
			
			if(c+lwrb < ans)
			{
				cout<<c+lwrb<<"\n";
			}
            else
            {
            	cout<<ans<<"\n";
			}
                	
		}
		else
		{
			cout<<ans<<"\n";
		}
		
		
		
	}
}
