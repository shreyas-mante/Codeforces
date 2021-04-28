#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



signed main()
{
	imback;
	nuke
	{
		
		ll n1,lc;
     	cin>>n1>>lc;
     	
     	
     	for(ll i=0;i<n1;i++)
		 {
     		ll n,x;
     		ll fg = 0;
			string r;
     		cin>>n;
     		r = to_string(n);
     		size_t finding = r.find(to_string(lc)); 
			if (finding != string::npos)
			 {
	     		fg=1;
				goto wt;				    	
			}
     			
     		x=n / lc;
     		
     		for(ll i=x;i>0;i--)
			{
     			r= to_string (n - lc * i);
     			
     			size_t finding = r.find(to_string(lc)); 
				if (finding != string::npos)
				{
	     			fg=1;
					break;				    	
				}
     	
			}	     
			wt : 		
     		if(fg==1)
     		{
     			cout<<"YES";
			}
     		else
     		{
     			cout<<"NO";	
			 }
			 	
			cout<<endl;
		 }
		
		
		
	}
}


