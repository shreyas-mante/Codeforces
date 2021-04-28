#include<bits/stdc++.h>
#define Fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

using namespace std;

int main()
{
  ll t,i,j,k,n,x,y,z,r,l,a,b,q,T,d,m;
  Fast;
  cin>>t;
  while (t--)
    {
  string s1,s2; 
  cin>>s1>>s2;
  ll s11=s1.length();
  ll s22=s2.length();
    ll gc = __gcd(s11, s22);
    ll cal=s11*s22;
    ll lcm = cal/gc;
    ll a = lcm/s11;
    ll b = lcm/s22;
    string x = "";
    string y = "";
    while(a--)
  {
        x += s1;
    }
    
    while(b--)
  {
        y += s2;
    }
    if(x == y)
  {
        cout<<x<<endl;
    }
    else
        cout<<"-1"<<endl;
  }
  return 0;
}3
baba
ba
aa
aaa
aba
ab

