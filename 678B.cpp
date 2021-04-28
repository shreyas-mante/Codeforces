#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1e9+7

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	ll w=1;
    	cin>>n;
    	if((n&1)==0)
		{
	    	for(ll i=0;i<n;i++)
			{
	    		for(int j=0;j<n;j++)
				{
	
	    		if( j == n-1-i )
				{
					cout<<15<<" ";
				}	
	    		else if(i==j)
				{
					 cout<<4<<" ";
				}	    		 
	    		else
	    		{
	    			cout<<0<<" ";	
				}
	    	
				}
				cout<<"\n";
			}
		}
		else
		{
	    	for(ll i=0;i<n;i++)
			{
	    		
	    		for(ll j=0;j<n;j++)
				{
				
				if(i == (n+1)/2-1 && (j==0||j==n-1) )
				{
						cout<<4<<" ";
				}
				else if(j == (n+1)/2-1 && (i==0 ||i==n-1))
				{
						cout<<4<<" ";
				}
				
	    		else if( j == n-1-i )
				{
						cout<<15<<" ";
				}	
	    		else if(i==j)
				{
					 cout<<4<<" ";    	
				}	
	    			 
	    		else
	    		{
	    			cout<<0<<" ";
				}
	    		
				}
				cout<<"\n";
			}
		}			
	}	
}
