#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
	nuke
	{
		ll n;
		cin>>n;
		ll atmax = INT_MAX;
		vector<ll>result;
		
		for(ll p=0;p<((n*3)+1);p++)
		{
			ll cnt = 0;
			vector<ll>arr1(n,0);
			vector<ll>res;
			bool ok = true;
			for(ll i=0;i<n-1;i++)
			{
				for(ll k=i+1;k<n;k++)
				{
					if(arr1[i] + 3 <= p)
					{
						arr1[i]+=3;
						res.push_back(1);
						continue;
					}
					else if(arr1[i]< p)
					{
						arr1[i]+=1;
						res.push_back(0);
						arr1[k]+=1;
						cnt++;
						continue;
					}
					if(arr1[k] + 3 <= p)
					{
						arr1[k]+=3;
						res.push_back(-1);
						continue;
					}
					else if(arr1[i] < p)
					{
						arr1[i]+=1;
						res.push_back(0);
						arr1[k]+=1;
						cnt++;
						continue;
					}
					else
					{
						ok = false;
						break;
					}
				}
			}
			
			if(!ok)
			{
				continue;
			}
			else
			{
				ll mn = *min_element(arr1.begin(),arr1.end());
				ll mx = *max_element(arr1.begin(),arr1.end());
				
				if(mn == p && mx == p)
				{
					if(atmax > cnt)
					{
						atmax = cnt;
						result = res;
					}
				}
			}
		}
		
		for(ll i=0;i<result.size();i++)
		{
			cout<<result[i]<<" ";
		}
		cout<<endl;
	}
}


