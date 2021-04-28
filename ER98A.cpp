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
		
		ll ans1 = count(s.begin(),s.end(),')');
		ll ans2 = count(s.begin(),s.end(),'(');
		
		ll ans3 = count(s.begin(),s.end(),']');
		ll ans4 = count(s.begin(),s.end(),'[');
		ll sum = 0;
		if(ans1 == ans2)
		{
			sum = sum+ans1;
		}
		
		if(ans3==ans4)
		{
			sum = sum+ans3;
		}
		
		cout<<sum<<endl;
		
	}
}
