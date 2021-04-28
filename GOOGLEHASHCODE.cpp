#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
//	imback;
//	nuke
//	{
		ll d , I , s , v, f;
		cin>>d>>i>>s>>v>>f;
		
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
		
//		ll cartravel[v];
		string paths[v];
		for(ll i=0;i<v;i++)
		{
			string s2;
			getline(cin,s2);
			paths[i] = s2;
		}
		
		cout<<I<<endl;
		for(ll i=0;i<I;i++)
		{
			cout<<i<<endl;
			
		}
//		cout<<"3"<<endl;
//		cout<<"1"<<endl;
//		cout<<"2"<<endl;
//		cout<<"rue-d-athenes 2"<<endl;
//		cout<<"rue-d-amsterdam 1"<<endl;
//		
//		cout<<"0"<<endl;
//		cout<<"1"<<endl;
//		cout<<"rue-de-londres 1"<<endl;
//		
//		cout<<"2"<<endl;
//		cout<<"1"<<endl;
//		cout<<"rue-de-moscou 1"<<endl;

//	}
}


