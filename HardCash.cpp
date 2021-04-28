#include<bits/stdc++.h>
using namespace std;


int main()
{
	int *test=new int;
	long *num=new long;
	long *k=new long;
	long ans=0;
	int *arr2=new int[*num];
	cin>>*test;
	for(int i=0;i<*test;i++)
	{
		cin>>*num>>*k;
		int *arr=new int[*num];
		
		
		for(int j=0;j<*num;j++)
		{
			cin>>arr[j];
		}
		
		int p=1;
		int q=0;
		for(int j=0;j<*num;j++)
		{
			int val=arr[j]+q;
			q=0;
			while(val%*k!=0)
			{
				val=val-p;
				q++;
			}
			ans=q;
				
		}
		
		arr2[i]=ans;
		
		
		
	}
	
		for(int z=0;z<*test;z++)
		{
			cout<<arr2[z]<<"\n";
		}
}
