#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
	ll *test=new ll;
	ll *num=new ll;
	ll *k=new ll;
	ll rem=0;
	
	ll*arr2=new ll[*num];
	
	cin>>*test;
	for(int i=0;i<*test;i++)
	{
		cin>>*num>>*k;
		ll*arr=new ll[*num];
		rem=0;
		
		for(int j=0;j<*num;j++)
		{
			cin>>arr[j];
			
		}
		
		
		for(int p=0;p<*num;p++)
		{
			rem=*k%arr[p];
//			if(rem==0)
//			{
//				cout<<"NO"<<" ";
//			}
//			else
//			{
//			    cout<<"YES"<<" ";
//			}
			while(1)
			{
			if(rem==0)
			{
				cout<<rem;
				break;
			}
			
			if(rem<*num)
			{
				cout<<rem+*num-1<<" ";
				break;
			}
			
			if(rem>=*num)
			{
				cout<<"YES"<<" "<<rem-*num-1<<" ";
				break;
			}
			
			}
			
			
			
		}
		}
		
		cout<<endl;
		
	
	}
	


