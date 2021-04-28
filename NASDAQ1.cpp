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
		ll c0 = 0,c1 = 0;
		ll n;
		cin>>n;
		cin>>s;	
		
		for(ll i=0;i<n;i++) // common same freq
		{
			if(s[i] == '0')
			{
				c0++;
			}
			else 
			{
				c1++;
			}		
		}
		
		if(c0==n || c1==n)
		{
			cout<<n<<endl;
			continue;
		}
		ll ans1 = 0,ans2 = 0,ans3 = 0,ans4 = 0,ans5 = 0,ans6 = 0;
		ll result = 0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0' && s[i+1]=='1')
			{
				ans1=1;
				i++;
				continue;
			}
			else if(s[i]=='1' && s[i+1]=='0')
			{
				ans2=1;
				i++;
				continue;
			}
			if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
			{
				ans3=1;
				i+=2;
				continue;
			}
			else if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
			{
				ans4=1;
				i+=2;
				continue;
			}
			else
			{
				if(s[i]=='0')
				{
					if(ans6>0)
					{
						ans6--;// dec it of i
					}
					ans5++;
				}
				else
				{
					if(ans5>0)
					{
					//cout<<i<<endl;	
						ans5--;
					}
					ans6++;							
				}
			}
		}
		result=ans1+ans2;
		ans3+ans4+ans5+ans6;
		cout<<result;
	}
}
