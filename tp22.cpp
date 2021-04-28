#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int magicalString(int N , int C0 , int C1 , int H , string S)
{
	if(C0 == C1)
	{
		return N * C0;
	}
	else
	{
		
		int s1 = 0;
		int s0 = 0;
		for(int i=0;i<N;i++)
		{
			if(S[i] == '0')
			{
				s0++;	
			} 
			else
			{				
				s1++;
			}
		}
		int ans = min(C0,C1);
		if(ans == C0 && H+C0 < C1)
		{
			int res = 0;
			res = (H+C0)*s1;
			res += C0 * s0;
			return res;
		}
		else if(ans == C1 && H+C1 < C0)
		{
			int res = 0;
			res = (H + C1) * s0;
			res += C1 * s1;
			return res;
		}
		else
		{
			int res = 0;
			res = C0*s0 + s1*C1;
			return res;
		}
	}
}

signed main()
{
	imback;
//	nuke
//	{
		ll n;
		cin>>n;
		ll c0,c1,h;
		cin>>c0>>c1>>h;
		string s;
		cin>>s;
		
		ll ans = magicalString(n,c0,c1,h,s);
		cout<<ans<<endl;	
//	}
}


