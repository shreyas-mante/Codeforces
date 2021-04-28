#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	
	int main()
	{
		ll t;
		cin>>t;
		while(t--)
		{
			ll n;
			cin>>n;
			ll a,b;
			ll ch=0;
			ll mt=0;
			while(n--)
			{
				ll sum=0,sum1=0;
				cin>>a>>b;
				if(a>9)
				{
					while(a!=0)
					{
						ll r = a%10;
						sum=sum+r;
						a=a/10;
					}
					a=sum;
				}
				
				if(b>9)
				{
					while(b!=0)
					{
						ll r = b%10;
						sum1=sum1+r;
						b=b/10;
					}
					b=sum1;
				}
				
				
				if(a>b)
				{
					ch++;
				}
				else if(b>a)
				{
					mt++;
				}
				else
				{
					mt++;
					ch++;
				}	
				
			}
		if(ch>mt)
		{
			cout<<"0"<<" "<<ch<<endl;
		}
		else if(mt>ch)
		{
			cout<<"1"<<" "<<mt<<endl;
		}
		else
		{
			cout<<"2"<<" "<<mt<<endl;
		}
	}
}
