#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		
		vector<ll>v(n,0);
		set<ll>ans;
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		
		for(int i=0;i<n;i++)
		{
			ans.insert(v [i] % k );
		}
		ll gl = 0;
		for(int i=0;i<n;i++){
			if(v[i]%k != 0 && ans.find(k - v[i]%k) == ans.end()){
				gl = 1;
				break;
			}
		}
		
		if(gl == 0)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
}


