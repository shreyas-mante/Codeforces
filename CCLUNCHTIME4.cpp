#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s1,s2;
		cin>>s1;
		cin>>s2;
		
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		ll c = 0;
		ll b = 0;
		for(ll i=0;i<s1.size();i++)
		{
			if(s1[i] == s2[i])
			{
				c++;
				continue;
			}
			else
			{
				cout<<"No"<<endl;
				b = 1;
				break;
			}
		}
		
		if(b == 0 && c==s1.size())
		{
			cout<<"Yes"<<endl;
		}
		
		
		
	}
}
