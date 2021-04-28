#include<bits/stdc++.h>
#define ll long long int;
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
		rem1=0;
		for(int j=0;j<*num;j++)
		{
			cin>>arr[i];
			rem+=arr[i]%k;
			
			
		}
		
		rem%=*k;
		arr2[i]=rem;
	}
	
	for(int i=0;i<*test;i++)
	{
		cout<<arr2[i]<<endl;
	}
}
