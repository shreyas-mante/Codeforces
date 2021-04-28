	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int 
	
	
	int main()
	{
		ll t;
		cin>>t;
		while(t--)
		{
			ll a,b;
			cin>>a>>b;
			if(a==0 && b==0)
			{
				cout<<"0"<<endl;
			}
			else if(a%2==0 && b%2!=0 && b>=0)
			{
				cout<<"1"<<endl;
			}
			else if(a%2==0 && b%2!=0 && b<0)
			{
				cout<<"2"<<endl;
			}
			else
			{
				cout<<"2"<<endl;
			}
		}
	}
