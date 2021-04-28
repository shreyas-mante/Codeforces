#include<bits/stdc++.h>
using namespace std;


int main()
{
	int size;
	cin>>size;
	int *arr=new int[size];
	
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	int curr_sum=0;
	int best_sum=INT_MIN;
	
	for(int i=0;i<size;i++)
	{
		curr_sum=curr_sum+arr[i];
		
		
		if(best_sum<curr_sum)
		{
			best_sum=curr_sum;
		}
		
		if(curr_sum<0)
		{
			curr_sum=0;
		}
		
	}
	
	cout<<best_sum;
}
