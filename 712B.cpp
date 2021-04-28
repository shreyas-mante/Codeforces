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
		string a,b;
		cin>>a>>b;
		
		string a1 = a;
		string b1 = b;
		sort(a1.begin(),a1.end());
		sort(b1.begin(),b1.end());
		
		if(a1 == b1)
		{
			
			if(a == b)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				
				
						ll pf[n+1];
						for(ll i=0;i<n;i++)
						{
							if(a[i] == '1')
							{
								pf[i+1] = pf[i] + 1;
							}
							else
							{
								pf[i+1] = pf[i] - 1;
							}
						}
						bool fg = true;
						bool fp = false;
						for(ll i=n-1;i>=0;i--)
						{
							fg = true;
							fp = false;
							
							if((!fp && a[i] == b[i]) || (fp && a[i]!=b[i]))
							{
								continue;
							}
							else if(pf[i+1] == 0)
							{
								fp = !fp;
							}
							else
							{
								fg = false;
								break;
							}
						}
						
						if(fg == true)
						{
							cout<<"YES"<<endl;
						}
						else
						{
							cout<<"NO"<<endl;
						}
				
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}

		
	}
}
