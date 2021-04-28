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
             ll i=1,j=0;
             char v[64];
             memset(v,'X',sizeof(v));
             v[0]='O';
             while(i<n)
             {
                    v[i]='.';
                    i++;
             }
             
             
            ll tp=0;
                  for(ll i=0;i<64;i++)
            {
                   if(tp==8)
                         {
                            tp=0;
                                cout<<"\n";
                         }
                         cout<<v[i];
                         tp++;
            }
            
            
            cout<<endl;
     }
     
     
 return 0;
}
