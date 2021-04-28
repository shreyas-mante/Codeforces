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
		vector<ll>v;	
		if((n&1) == 0)
		{
			while(1)
			{
				n=n/2;
				if((n&1)!=0)
				{
					v.push_back(n*2);
					break;
				}
				else
				{
					v.push_back(2);
				}
			}
			cout<<v.size()<<endl;
			for(ll i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			if(n%3!=0)
			{
				cout<<"1"<<endl;
				cout<<n<<endl;
			}
			else
			{
				while(1)
				{
					if(n%3==0)
					{
						v.push_back(3);
						n=n/3;
					}
					else
					{
					
						break;
					}
				}
				cout<<v.size()<<endl;
				for(ll i=0;i<v.size();i++)
				{
					cout<<v[i]<<" ";
				}
				cout<<endl;
			}
			
			
		}
		
	}
}
