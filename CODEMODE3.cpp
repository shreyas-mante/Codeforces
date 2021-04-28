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
//    nuke
//    {
        ll n;
        cin>>n;
        vector<ll>v(n,0);
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
    
        for(ll i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        
        
        sort(v.begin(),v.end());
        ll add = 0;
        ll c = 0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                add = add + (v[i]+1);
                
                if(mp[add] > 0)
                {
                    c++;
                }
            }
        }
        
        cout<<abs(n-c)<<endl;
//    }
}


