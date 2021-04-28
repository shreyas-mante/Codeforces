#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n1 = 4000005;
    vector<ll>ps;
    bool pp[n1+1];
    memset(pp , true , sizeof(pp));
    for(ll i=2; i*i<=n1;i++)
    {
    	if (pp[i] == true)
    	{
    		for(ll j=i*i;j<=n1;j+=i)
            {
            	pp[j] = false;
			}
		}    
	}
    for(ll i=2;i<=n1;i++)
    {
    	if (pp[i])
    	{
    		ps.push_back(i);	
		}
	}
	
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			if(arr[i]==i+1)
			{
				cout<<ps[i]<<" ";
			}
			else
			{
				cout<<ps[arr[i]-1]<<" ";
			}
		}
		cout<<endl;
	}
}
   
