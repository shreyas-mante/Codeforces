#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	int n;
	vector<int>v2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		vector<int>v;
		int c=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]==1)
			{
				v.push_back(i+1);
			}
		}
		if(v.size()==1)
		{
			c=0;
			v2.push_back(c);
		}
		else
		{
				
		int j=1;
		
	
		for(int i=0;i<v.size()-1;i++)
		{
			int ans=v[j]-v[i];
			
			if(ans<6)
			{
				c=1;
				break;
			}
			j++;
			
		}
		v2.push_back(c);
		}
	
	}
	

	
	for(int i=0;i<v2.size();i++)
	{
		if(v2[i]==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
}



	
