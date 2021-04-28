#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		
//		for(ll i=0,j=0;i<n,j<n;)
//		{
//			
//		}
		ll i=0 , j=0;
		ll ans = 0;
		while(i<n && j<n)
		{
			if(s[i]=='M')
			{
				if(s[j] == 'I')
				{
					ll cnt = count(s.begin()+i , s.begin()+j , ':');
					ll power = k + 1 - abs(j-i) - cnt;
					if(power>0)
					{
						ans++;
					}
					j++;
					i = j;
				}
				else if(s[j] == 'X')
				{
					j++;
					i = j;
				}
				else
				{
					j++;
				}
			}
			else
			{
				if(s[j] == 'M')
				{
					ll cnt = count(s.begin()+i , s.begin()+j , ':');
					ll power = k + 1 - abs(j-i) - cnt;
					if(power>0)
					{
						ans++;
					}
					j++;
					i = j;
				}
				else if(s[j] == 'X')
				{
					j++;
					i = j;
				}
				else
				{
					j++;
				}
			}
		}
		
		cout<<ans<<endl;
	}
}
