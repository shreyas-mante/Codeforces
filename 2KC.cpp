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

/*/-----------------------------MODS&CONSTS--------------------------------/*/
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
inline bool isprime(ll n)          {ll i; for (i = 2; i <= sqrt(n); i++) {if (n % i == 0)return false;} return true;}


/*/-----------------------------WRK FUNCTIONS--------------------------/*/
ll factorial[3000007] = {0};
void facto() {
    factorial[0] = 1; factorial[1] = 1; for(int i = 2; i < 3000007; i++)factorial[i] = (factorial[i-1]*i)%MOD;
}



/*/-----------------------------NUKE BEGINS-------------------------------/*/

signed main()
{
	imback;
	nuke_google
	{
		ll r,c;
		cin>>r>>c;
		ll arr[r][c];
		
		for(ll i=0;i<r;i++)
		{
			for(ll j=0;j<c;j++)
			{
				cin>>arr[i][j];
			}
		}
		
		if(r == 1)
		{
			ll cnt = 0;
			
			for(ll i=0;i<r;i++)
			{
				for(ll j=0;j<c-1;j++)
				{
					if(abs(arr[i][j] - arr[i][j+1]) != 1)
					{
						cnt = cnt + (--arr[i][j]);
						arr[i][j+1] = arr[i][j];
					}
				}
			}
			
			cout<<"Case #"<<i_1<<": "<<cnt<<endl;
		}
		else
		{
			ll cnt = 0;
			for(ll i=0;i<r;i++)
			{
				for(ll j=0;j<c;j++)
				{
					if(i == 0 && j ==0) 
					{
						if(arr[i][j] <= arr[i][j+1] && arr[i][j] <= arr[i+1][j]) 
						{
							continue;
						}
						else
						{
							if(arr[i][j] > arr[i][j+1]+1)
							{
								arr[i][j+1] = (arr[i][j] - 1);
								cnt = cnt + (arr[i][j] - 1);
							}
							else if(arr[i][j] > arr[i+1][j]+1)
							{
								arr[i+1][j] = (arr[i][j] - 1);
								cnt = cnt + (arr[i][j] - 1);
							}
							else
							{
								continue;
							}
						}
					}
					else if(r == r-1 && j == 0)
					{
						if(arr[i][j] <= arr[i][j-1] && arr[i][j] <= arr[i][j+1])
						{
							continue;
						}
						else
						{
							if(arr[i][j] > arr[i][j-1] +1 )
							{
								arr[i][j-1] = (arr[i][j] - 1);
								cnt = cnt + (arr[i][j] - 1);
							}
							else if(arr[i][j] > arr[i][j+1] +1 )
							{
								arr[i][j+1] = (arr[i][j] - 1);
								cnt = cnt + (arr[i][j] - 1);
							}
							else
							{
								continue;
							}
						}
					}
					else if(i>0 && j>0 && i<r-1 && j<c-1)
					{
						if(arr[i][j] > arr[i][j-1] + 1 )
						{
							arr[i][j-1] = arr[i][j] - 1;
							cnt = cnt + (arr[i][j] - 1);
						}
						else if(arr[i][j] > arr[i-1][j] + 1)
						{
							arr[i-1][j] = arr[i][j] - 1;
							cnt = cnt + (arr[i][j] - 1);
						}
						else if(arr[i][j] > arr[i][j+1] + 1)
						{
							arr[i][j+1] = arr[i][j] - 1;
							cnt = cnt + (arr[i][j] - 1);
						}
						else if(arr[i][j] > arr[i+1][j] + 1)
						{
							arr[i+1][j] = arr[i][j] - 1;
							cnt = cnt + (arr[i][j] - 1);
						}
					}
				}
			}
			
			cout<<"Case #"<<i_1<<": "<<cnt<<endl;
		}
	}
}



