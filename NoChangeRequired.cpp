#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	ll test,num,k,rem=0;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cin>>num>>k;
		ll *arr=new ll[num];
		for(int j=0;j<num;j++)
		{
			cin>>arr[j];
			rem=0;
			while(1)
			{
			
				rem=rem+arr[j];
				if(rem==k)
				{
					cout<<"NO"<<" "<<"0"<<endl;
					break;
				}
				if(rem>k)
				{
					cout<<"YES "<<" "<<rem-k<<endl;
					break;	
				}
				
				
			}
			
		}
		
		
	}
	
	
	
}
