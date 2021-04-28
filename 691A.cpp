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
		string s1,s2;
		cin>>s1>>s2;
		reverse(s1.begin(),s1.end());
		reverse(s2.begin(),s2.end());
		
		ll c1 = 0;
		ll c2 = 0;
		
		for(ll i:s1)
		{
			if(s1[i] - '0' > s2[i] - '0')
			{
				c1++;
			}
			
			if(s2[i] - '0' > s1[i] - '0')
			{
				c2++;
			}
		}
		//cout<<c1<<" "<<c2<<endl;
		if(c1==c2)
		{
			cout<<"EQUAL"<<endl;
			
		}
		else if(c1>c2)
		{
			cout<<"RED"<<endl;
		}
		else
		{
			cout<<"BLUE"<<endl;
		}
		
	}
}

