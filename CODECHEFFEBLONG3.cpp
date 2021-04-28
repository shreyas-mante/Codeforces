#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imbackkk ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imbackkk;
	nuke
	{
		string s,s1;
		cin>>s>>s1;
		ll n;
		cin>>n;
		
		if(s1 == "AM")
		{
//			cout<<"A"<<endl;
			if(s[0] == '1' && s[1] == '2')
			{
				ll ans = (ll)(s[0] - 48)*10;
				ans = ans + (ll)(s[1] - 48)-12;
				ll res = ans % 10;
				s[0] = char((ll)(ans/10) + 48);
				s[1] = char(res + 48);
			}

		}	
		else
		{
//			cout<<"P"<<endl;
			if(s[0] == '1' && s[1] == '2')
			{
//				ll ans = (s[0] - 48)*10;
//				ans = ans + (s[1] - 48) + 12;
//				continue;
			}
			else
			{
				ll ans = (ll)(s[0] - 48)*10;
				ans = ans + (ll)(s[1] - 48)+12;
				ll res = ans % 10;
				s[0] = char((ll)(ans/10) + 48);
				s[1] = char(res + 48);
			}
		}
		
//		string t = s.substr(0,4);
//		cout<<t<<endl;
//		cout<<s<<endl;

		string a,b,c,d;
		for(ll i=0;i<n;i++)
		{
			cin>>a>>b>>c>>d;
			
			if(b == "AM")
			{
				
				if(a[0] == '1' && a[1] == '2')
				{
					ll ans = (ll)(a[0] - 48)*10;
					ans = ans + (ll)(a[1] - 48)-12;
					ll res = ans % 10;
					a[0] = char((ll)(ans/10) + 48);
					a[1] = char(res + 48);	
				}
			}
			else
			{
				if(a[0] == '1' && a[1] == '2')
				{
//					continue;
				}
				else
				{
					ll ans = (ll)(a[0] - 48)*10;
					ans = ans + (ll)(a[1] - 48)+12;
					ll res = ans % 10;
					a[0] = char((ll)(ans/10) + 48);
					a[1] = char(res + 48);	
				}
			}
			
			if(d == "AM")
			{
				if(c[0] == '1' && c[1] == '2')
				{
					ll ans = (ll)(c[0] - 48)*10;
					ans = ans + (ll)(c[1] - 48)-12;
					ll res = ans % 10;
					c[0] = char((ll)(ans/10) + 48);
					c[1] = char(res + 48);	
				}
				
			}
			else
			{
				if(c[0] == '1' && c[1] == '2')
				{
//					continue;
				}
				else
				{
					ll ans = (ll)(c[0] - 48)*10;
					ans = ans + (ll)(c[1] - 48)+12;
					ll res = ans % 10;
					c[0] = char((ll)(ans/10) + 48);
					c[1] = char(res + 48);	
				}
			}
			
			
			if(s <= c && s>=a)
			{
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
		
		cout<<endl;
	}
}


