#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//52953008 41784347 28668647

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll arr[3],t=0;
		for(ll i=0;i<3;i++)
		{
			cin>>arr[i];
		}
		
		for(ll i=0;i<3;i++)
		{
			if(arr[i] != 1)
			{
				t+=arr[i]-1;
			}
			
			
		}
		if((t+1)%7==0)
		{
			cout<<"YES";
		}
			
		else
		{
			cout<<"NO";
		}
			
		cout<<endl;		
	}
	return 0;
}
