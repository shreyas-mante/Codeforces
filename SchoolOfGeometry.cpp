#include<bits/stdc++.h>
using namespace std;


int main()
{
	long *test=new long;
	long *n=new long;
	long sum=0;
	long arr4[1000];
	
	cin>>*test;
	for(int i=0;i<*test;i++)
	{
		cin>>*n;
		int *arr1=new int[*n];
		int *arr2=new int[*n];
		
		
		for(int j=0;j<*n;j++)
		{
			cin>>arr1[j];
			
		}
		for(int j=0;j<*n;j++)
		{
			cin>>arr2[j];
			
		}
		sort(arr1,arr1+(*n));
		sort(arr2,arr2+(*n));
		sum=0;
		for(int k=0;k<*n;k++)
		{
			if(arr1[k]<=arr2[k])
			{
			sum=sum+arr1[k];	
			}
			else
			{
			sum=sum+arr2[k];
			}
		}
		
		arr4[i]=sum;
		
		
	}
	
	
	for(int i=0;i<*test;i++)
	{
		cout<<arr4[i]<<"\n";
	}

	
	return 0;
}
