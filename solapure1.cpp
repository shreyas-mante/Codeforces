// im__back - Shreyas Mante
#include<bits/stdc++.h>
using namespace std;

/*/-----------------------------TC && FASTIO--------------------------------/*/
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define case_google cout<<"Case #";
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/*/-----------------------------MODS&CONSTS---------------------------------/*/
#define MOD 		1000000007
#define pi          3.1415926535

/*/-----------------------------FILE--------------------------------/*/
#define sampleio    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

/*/-----------------------------DEFINES------------------------------------/*/
#define ll 			long long int
#define ld 			long double
#define pb 			push_back
#define mk	 		make_pair
#define fi			first
#define se			second
#define ad 			adjacent_difference  //(a,a+6,newarr);// store adjacent diff of array
#define ita			iota //(a,a+8,100) // store inc values (100,101,102..)

/*/-----------------------------INLINE FUNCTIONS--------------------------/*/
inline ll gcd(ll a, ll b)          {if (b == 0) return a;    return gcd(b, a % b);}
inline ll lcm(ll a, ll b)          {return (a / gcd(a, b) * b);}
inline bool isprime(ll n)            {ll i; for (i = 2; i <= sqrt(n); i++) {if (n % i == 0)return false;} return true;}


/*/-----------------------------WRK FUNCTIONS--------------------------/*/
ll factorial[3000007] = {0};
void facto() {
    factorial[0] = 1; factorial[1] = 1; for(int i = 2; i < 3000007; i++)factorial[i] = (factorial[i-1]*i)%MOD;
}



/*/-----------------------------NUKE BEGINS-------------------------------/*/

signed main()
{
	imback;
	nuke
	{
		ll n,p;
		cin>>n>>p;
		
		vector<ll>arr(n);
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		vector<ll>arr33(arr);
		set<pair<ll,ll> >arr1[p+1];
		for(ll i=1;i<=p;i++)
		{
			ll u,v;
			cin>>u>>v;
			arr1[u].insert({v,arr[v-1]});
			arr1[v].insert({u,arr[u-1]});
			arr[v-1] = 0;
			arr[u-1] = 0;
		}
		vector<pair<ll,ll> >arr2[p+1];
		for(ll i=1;i<=p;i++)
		{
			ll u,v;
			cin>>u>>v;
			arr2[u].push_back({v,arr33[v-1]});
			arr2[v].push_back({u,arr33[u-1]});
			arr33[v-1] = 0;
			arr33[u-1] = 0;
		}
		
		
		for(ll i=0;i<p;i++)
		{
			
		}
		
		
	}
}




