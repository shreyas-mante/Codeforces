#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define tc ll t; cin>>t; while(t--)

int main()
{
   
    tc{
    	
     	ll n,m;
     	cin>>n>>m;
     	ll arr[n][m];
     	for(ll i=0;i<n;i++)
     	{
     		for(ll j=0;j<m;j++)
     		{
     			cin>>arr[i][j];
			 }	
		}
     		
     	ll q,x,y,z;
     	cin>>q;
		while(q--)
		{
			cin>>x>>y>>z;
			arr[x-1][y-1]=z;
			ll li=0,bc;
			ll fg=0;
	    	ll i=0;
			for(ll j=0;j<m;j++)
			{
				bc=arr[0][j];
				i=j;
				li=0;			
				while(li<n && i<m)
				{
					if(bc!=arr[li][i])
					{
						fg=1;
						goto peace;
					}
					i++;
					li++;						
				}
			}
	    	i=0,li=0,fg=0;
	    	bc = 0;
			for(ll j=0;j<m;j++)
			{
				bc=arr[j][0];
				i=j;
				li=0;			
				while(li<m && i<n)
				{
					if(bc!=arr[i][li])
					{
						fg=1;
						goto peace;
					}
					i++;
					li++;						
				}
			}
		
		peace :
		if(fg==0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	}

}
