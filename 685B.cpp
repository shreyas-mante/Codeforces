#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		
		ll ans1=-1,ans2=-1;
		ll ans3=-1,ans4=-1;
        for(ll i=0;i<n;i++)
           {
               if(s[i]=='1')
               {
                   if(ans3==-1)
                   {
                       ans3=i;
                   }
                   else
				   {
                   ans1=i;
				   }
               }
               else
               {
                   if(ans4==-1)
                   {
                       ans4=i;
                   }
                   else
                   {
                   ans2=i;
				   }
               }
           }
           
           
           if(ans1==-1)
           {
               ans1=ans3;
           }
           if(ans2==-1)
           {
               ans2=ans4;
           }
           
        
           while(q--)
           {
               ll a,b;
               cin>>a>>b;
               a = a-1;
               b = b-1;
               if( (b==ans1 || b==ans2) && (a==ans3 || a==ans4))
               {
                   cout<<"NO";
               }
               else
               {
                   cout<<"YES";
               }
               cout<<endl;
           }
	}
}
