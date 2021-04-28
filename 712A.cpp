	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	
	
	int main()
	{
		ll t;
		cin>>t;
		while(t--)
		{
			string s;
			cin>>s;
			string p = s;
			
			s = s + 'a';
			string ans = s;
			reverse(ans.begin(),ans.end());
			
			
			
			if(ans == s)
			{
				string ap = "a";
				ap = ap + p;
				string ans1 = ap;
				reverse(ans1.begin(),ans1.end());
				if(ap == ans1)
				{
					cout<<"NO"<<endl;
				}
				else
				{
					cout<<"YES"<<endl;
					cout<<ap<<endl;
				}
			}
			else
			{
	//			string as = "a";
	//			as = as + p;
	//			if(p == ans)
	//			{
	//				cout<<"NO"<<endl;
	//			}
	//			else
	//			{
					cout<<"YES"<<endl;
					cout<<s<<endl;
	//			}
				
			}
			
			
		}
	}
