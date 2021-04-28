#include<bits/stdc++.h>
using namespace std;
#define val 1000000007
#define ll long long int



int main()
{
	
	int t;
	cin>>t;
	vector<ll>v2;
	while(t--)
	{
		
		int n;
		vector<ll>v;
		cin>>n;
		
		ll arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			v.push_back(arr[i]);
		}
		sort(v.begin(),v.end(),greater<ll>());
		ll sum=0;
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			
			if(v[i]>0 && v[i]!=0)
			{
				sum=v[i]-i;
				if(sum>=0)
				{
					ans=ans+sum;
				}
			}

			
		}
		v2.push_back(ans);
		
		
	}
	
	for(int i=0;i<v2.size();i++)
	{
		
		cout<<v2[i]%val<<endl;
		
	}
}











			
			
