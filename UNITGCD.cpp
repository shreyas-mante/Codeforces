#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<ll>v;
		vector<ll>v1;
		int ans=0;
		if(n<4)
		{
			cout<<"1"<<endl;
			cout<<"3"<<" "<<"1"<<" "<<"2"<<" "<<"3"<<" "<<endl;
		}
		else
		{
		
		for(ll i=1;i<=n;i++)
		{
			if(i%2==0)
			{
				v.push_back(i);
			}
			else
			{
				v1.push_back(i);
			}
		}
		
		if(n%2==0)
		{
			ans=n/2;
			cout<<ans<<endl;
			for(ll i=0;i<v.size();i++)
			{
				cout<<"2"<<" "<<v1[i]<<" "<<v[i]<<endl;
				
			}
		}
		else
		{
			ans=(n/2)+1;
			cout<<ans<<endl;
			for(ll i=0;i<v.size();i++)
			{
				cout<<"2"<<" "<<v1[i]<<" "<<v[i]<<endl;
			}
		cout<<"1"<<" "<<n;                 //v1[v1.size()]<<" "<<v[v.size()]<<endl;
		}
		
}
	}
	

}
