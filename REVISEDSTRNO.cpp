#include<bits/stdc++.h>
using namespace std;
#define ll long long int


inline bool getans1(ll k,vector<ll>v,ll size)
{
	ll c=0;
	ll flag=0;

	for(ll j=0;j<size;j++)
	{
		for(ll i=2;i<=sqrt(v[j]);i++)
		{
			if(v[j]%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			c++;	
		}	
	
	}
	if(c>=k)
	{
		return true;
		
	}
	else
	{
		return false;
	}


}









bool getans(ll n,ll k)
{
	ll c=0;
	ll p=0;
	ll i=2;
	vector<ll>v1;
	for(ll j=2;j<100000000;j++)
	{
		
		c=0;
		p=0;
		v1.clear();
		for(ll i=1;i<=sqrt(j);i++)
		{
			if (j%i==0)
        		{
            		if (j/i!=i)
                	{
                		v1.push_back(i);
                	    v1.push_back(j/i);
                		c++;
					}
      		   	   else
      		    	{
					
                		v1.push_back(i);
                		c++;
        			}
        			
        			
				}
		}
					i++;
					if(c==n)
        			{
        				p=1;
        				goto a;
					}
	
					
		
				
					

	}
	
	a:
//		for(ll i=0;i<v1.size();i++)
//		{
//			cout<<v1[i]<<endl;
//		}
		//cout<<v1.size();
		ll size=v1.size();
		if(p==1)
		{
		
			if(getans1(k,v1,size))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	
	
}

int main()
{
	ll t;
	ll n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		
		if(getans(n,k))
		{
			cout<<"1"<<endl;
			
		}
		else
		{
			cout<<"0";
		}
	}
}
