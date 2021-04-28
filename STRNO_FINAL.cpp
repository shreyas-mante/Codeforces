#include <bits/stdc++.h>
using namespace std;
#define bolt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int tt; cin>>tt; while(tt--)
#define ll long long
#define ld long double
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define max 1000000007
int main()
{
    test{
        ll n1,k1;
        cin>>n1>>k1;
        if(k1>=n1)
        {
            cout<<0<<endl;
        }
        else
        {
            ll ans=0;
                while (n1 % 2 == 0) 
                { 
                    n1 = n1/2; 
                    ans++;
                } 
                for (int i = 3; i <= sqrt(n1); i = i + 2) 
                { 
                    // While i divides n, print i and divide n 
                    while (n1 % i == 0) 
                    {
                        n1 = n1/i; 
                        ans++;
                    } 
                } 
                if (n1 > 2) {
                    ans++;
                }
                if(ans>=k1){
                    cout<<1<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
        }
    }
}
