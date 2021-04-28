#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string arr[s.size()+1][s.size()+1];
		for(ll i=0;i<s.size();i++)
		{
			for(ll j=1;j<=s.size()-i;j++)
			{
				string s1 = s.substr(i,j);
				arr[s1.length()][i] = s1;
			}
		}

		set<string>setty;
		for(ll i=1;i<=s.size();i++)
		{
			for(ll j=0;j<=s.size();j++)
			{
				setty.insert(arr[i][j]);	
			}
		}
		set<string>::iterator it;
		for(it = setty.begin();it!=setty.end();it++)
		{
			cout<<(*it)<<endl;
		}
		
		
	}
}
