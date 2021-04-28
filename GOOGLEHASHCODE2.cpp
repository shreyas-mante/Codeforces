#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
//    boost
    
    	freopen("ssp.txt","r",stdin);
    	freopen("sso.txt","w",stdout);
		ll d , I , s , v, f,cnt=0;
		cin>>d>>I>>s>>v>>f;
	
		ll strt[s] , end[s]  , time[s];
		string routes[s];
			
		for(ll i=0;i<s;i++)
		{
			ll s , e , t;
			string s1;
			
			cin>>s>>e>>s1>>t;
			strt[i] = s;
			end[i] = e;
			routes[i] = s1;	
		}	

		string paths[v];
		for(ll i=0;i<v;i++)
		{
			string s2;
			getline(cin,s2);
			paths[i] = s2;
		}		
		cout<<I<<"\n";
		for(ll j=0;j<I;j++){
			cout<<j<<"\n";
			
			cnt=0;
			
			for(ll k=0;k<s;k++){
				if(end[k]==j)
					cnt++;
			}
			cout<<cnt<<"\n";		
			
			for(ll k=0;k<s;k++){
				if(end[k]==j)
					cout<<routes[k]<<" "<<1<<"\n";
			}
		}

	return 0;
}
