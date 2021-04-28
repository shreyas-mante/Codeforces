#include<bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{
   
    map<ll,ll>mp;
    vector<ll>v1;
    map<ll,ll>::iterator it;
    ll arr,size;
    
        cin>>size;
        vector<ll>v;
        for(int i=0;i<size;i++)
        {
            cin>>arr;
            v.push_back(arr);
        }
       

        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
        }
		
	    for(it=mp.begin();it!=mp.end();it++)
	    {
	    	v1.push_back(it->second);
		}
		
		sort(v1.begin(),v1.end(),greater<int>());
		
		ll ans=v1[0];
		
		for(it=mp.begin();it!=mp.end();it++)
	    {
	    	if(it->second==ans)
	    	{
	    		cout<<it->first;
	    		break;
			}
		}

    
    
}
