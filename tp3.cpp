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
		
		if(s[0] == ')')
		{
			cout<<"NO"<<endl;
		}
		else
		{
			ll cnt1 = count(s.begin(),s.end(),')');
			ll cnt2 = count(s.begin(),s.end(),'(');
			ll cnt3 = count(s.begin(),s.end(),'?');
			ll ans = cnt1 + cnt2 + cnt3;
			if(cnt1 == 0 && cnt3 %2!= 0)
			{
				cout<<"NO"<<endl;
			}
			else if(cnt2 == 0 && cnt3%2 !=0)
			{
				cout<<"NO"<<endl;
			}
			else if(ans % 2 == 0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
			
			
		}
	}
}
