#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll t, n, x, ans, a[200005], k;
int main()
{
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n>>x;
		for(ll i=1; i<=n; i++)
		cin>>a[i];
		
		for(int i=1; i<=n; i++)
		if(a[i]<a[i-1])
		{
			k=0;		
			for(int j=1; j<=i; j++)
				if(a[j]>x)
				{
					k++;
					swap(a[j], x);
				}
				ans+=k;
				if(a[i]<a[i-1])
				{
					ans=-1;
					break;
				}
			}
		cout<<ans<<endl;
	}
}
