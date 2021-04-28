#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
	nuke
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll cnt = 0;
		ll dash = count(s.begin(),s.end(),'-');
		ll clock = count(s.begin(),s.end(),'>');
		ll antick = count(s.begin(),s.end(),'<');
		
		if(clock==1 && antick==1 && dash > 0)
		{
			cout<<dash+clock<<endl;
		}
		else if(clock == 0 || antick==0)
		{
			cout<<clock+antick+dash<<endl;
		}
		else if(clock == 1 && antick == 1)
		{
			cout<<dash<<endl;
		}
		else if(dash > 0 && clock > 0 && antick == 0)
		{
			cout<<dash+clock<<endl;
		}
		else if(dash > 0 && clock == 0 && antick > 0)
		{
			cout<<dash+antick<<endl;
		}
	}
}

