#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		long int n,c=1,ans=0;
		cin>>n;
		
		if(n<4)
		{
			cout<<1<<"\n";
			cout<<n<<" ";
			for(long int i=1;i<=n;i++)
			{
			
				cout<<i<<" ";
			}
			cout<<endl;
			
		}
		else
		{
			ans=n/2;
			cout<<ans<<"\n";
			
			for(long int i=1;i<=ans;i++)
			{
			
				if(n%2!=0 && c==n-2)
				{
					cout<<3<<" "<<c<<" "<<c+1<<" "<<c+2<<"\n";
					break;
				}
				cout<<2<<" "<<c<<" "<<c+1<<"\n";
				c=c+2;
			
			
			
			}
		}
	}
	
}
