#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,arr+n,greater<int>()); // sorting in descending order
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			j=i;			// calculating index of array till non zero element exists
		}
	}
	
	sort(arr,arr+j+1);   // sort the array from starting index till calculated index
	cout<<"[";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<",";  // print the array
	}
	cout<<"]";
	
	
	
}
