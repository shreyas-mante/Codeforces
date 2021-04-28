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
		string s;
		cin>>s;
		ll ans=0;
		for (int i = 0; i < n; i++) { 
  
        // If there is 1 at even index positions 
        if (i % 2 == 0 && s[i] == '1') 
            ans++; 
  
        // If there is 0 at odd index positions 
        if (i % 2 == 1 && s[i] == '0') 
            ans++; 
    	} 
		
		cout<<ans<<endl;
	}
}
