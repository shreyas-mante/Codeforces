#include<bits/stdc++.h>
using namespace std;





int main()
{
	int t;
	int n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
	int c=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
		
		
		
	}
	
	
	if(c>=k)
	{
		cout<<"1"<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}
	}
}
