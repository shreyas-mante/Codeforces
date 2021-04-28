#include <bits/stdc++.h>
using namespace std;
#define ll long long int 



ll maxgiven(ll v[], ll n) 
{ 
        
       ll ans = v[0]; 
       for (ll i = 1; i < n; i++) 
           ans = ans ^ v[i]; 
  
       return ans; 
} 


int main() 
{
      
    ll t;
    cin>>t;
     while(t--)
     {
           ll n;
           cin>>n;
           ll xcord=4*n-1;
           ll x1[xcord];
           ll y1[xcord];
           for(ll i=0;i<xcord;i++)
           {
                  cin>>x1[i]>>y1[i];
           }
           cout<<maxgiven(x1,xcord)<<" "<<maxgiven(y1,xcord)<<endl;
     }
 return 0;
}
