#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll d1 , v1 , d2 , v2 , p;
	cin>>d1>>v1>>d2>>v2>>p;
	
	ll cnt = 0;
	
	
	while(1)
	{
		cnt++;
		
		if(cnt>=d1)//first vaccine 
		{
			p = p - v1;
		}
		
		if(cnt>=d2)//second vaccine
		{
			p = p - v2;
		}
		
		if(p<=0)
		{
			break;
		}
	}
	
	cout<<cnt<<endl;
}
