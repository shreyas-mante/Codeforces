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
        vector<ll>v;
        ll ans;
        for(ll i=0;i<n;i++)
        {
            cin>>ans;
            v.push_back(ans);
            
        }
        
        ll sum=0;
        for(ll i=0;i<v.size()-1;i++)
        {
            sum = sum + abs(v[i]-v[i+1]);
        }
        
        cout<<sum-(v.size()-1)<<endl;

    }
}
