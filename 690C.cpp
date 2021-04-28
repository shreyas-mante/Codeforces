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
		
		if(n > 45)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			ll tp = 9;
			string ans = "";
			while(tp!=0 || n>0)
			{
				if(n <= tp)
				{
					ans = ans + to_string(n);
					n = 0;
					break;
				}
				else
				{
					ans = ans + to_string(tp);
					n = n - tp; // sub karaycha ikde n la -4 jhala tr - mkc
					tp--;
				}
			}
			if(n>0)
			{
				cout<<"-1"<<endl;
			}
			else
			{
				reverse(ans.begin(),ans.end());
				cout<<ans<<endl;
			}
		}
	}
}
