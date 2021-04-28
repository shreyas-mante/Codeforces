#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define maxi 1e6+5

signed main()
{
//	imback;
//	nuke
//	{
		string s;
   	    cin>>s;
   	    ll res = 1;
   	    vector<ll>dp(s.size(), 1), fanac(100001);
//   	    memset(fanac,1,sizeof(fanac));
   	    fanac[0] = fanac[1] = 1;
   	    for (ll i=2;i<=100000;i++)
		{
   	    	fanac[i] = (fanac[i-1]+fanac[i-2])%MOD;
		}
		
		
   	    for (ll i=0; i<s.size(); i++)
		{
   	    	if(s[i] == 'u' || s[i] == 'n')
			{
   	    		ll k;
				ll cnt=1;
   	    		for (k=i+1;k<s.size();k++)
				{
   	    			if(s[k] == s[i])
					{
						cnt++;
					}
   	    			else
					{
					  break; 	
					}
				}
				res = (res * fanac[cnt])%MOD;
				i = k-1;	
			}
			else if (s[i] == 'w' || s[i] == 'm')
			{
				res = 0;
				break;
			} 
		}
		cout <<res<<endl;	
		
	   
	    
//	}
}


