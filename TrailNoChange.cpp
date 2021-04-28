#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	ll test,num,k,sum=0,sum1=0,ans=0;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cin>>num>>k;
		ll *arr=new ll[num];
		sum=0;
		for(int j=0;j<num;j++)
		{
			cin>>arr[i];
			sum=sum+arr[i];
		}
		
		for(int j=0;j<num;j++)
		{
			sum1=0;
			ans=0;
			while(1)
			{
				sum1=sum1+arr[j];
				if(sum1==k)
				{
					cout<<"0"<<" ";
					break;
				}
				
				
				if(sum1>k)
				{
					ans=sum1-k;
					ans=ans%num;
					cout<<ans<<" ";
					break;
				}
			}
			
		
		}
		
		cout<<"\n";
	}
	
	
}
