#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool pmfind(ll n)
{
    
    if (n <= 1)
	{
		return false;
	}
	  
    if (n <= 3)
	{
		return true;
	}  

  
    if (n%2 == 0 || n%3 == 0)
	{
		return false;	
	} 

    for (ll i=5; i*i<=n; i=i+6)
    {
    	if (n%i == 0 || n%(i+2) == 0)
    	{
    		return false;
		}
           
	}
    return true;
}

ll npfind(ll np)
{

    if (np <= 1)
    {
    	return 2;
	}
        
    if(pmfind(np))
    {
    	return np;
	}
        
    ll pm = np;
    bool fg = false;

   
    while (!fg)
	{
        pm++;
        if (pmfind(pm))
        {
        	fg = true;
		}
            
    }

    return pm;
}


signed main()
{
	imback;
	nuke
	{
		ll d;
        cin>>d;
        ll ans1 , ans2;
        ll a = 1;
        ans1 = npfind(a+d);
        ans2 = npfind(ans1+d);

        cout<<(ans1*ans2)<<endl;
		
	}
}


