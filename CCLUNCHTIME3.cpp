#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		set<char>ss;
		ll cnt1=0 , cnt2 = 0;
		
		for(ll i=0;i<s.size();i++)
		{
			if(s[i] == 'a')
			{
				cnt1++;
			}
			
			if(s[i] == 'b')
			{
				cnt2++;
			}
		}
		ll ans = cnt1+cnt2;
		if(s.size()<3)
		{
			cout<<"0"<<endl;
		}
		else if(ans == s.size())
		{
			cout<<s.size()/3<<endl;
		}
	}
}
