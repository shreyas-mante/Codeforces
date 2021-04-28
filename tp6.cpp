#include<bits/stdc++.h>
using namespace std;
#define fill(w,t) memset(w,t,sizeof(w))
#define google cout<<"Case #"<<countu<<": "
#define S(t) (ll)t.size()
#define bl '\n'
#define nl cout<<bl
#define cout1(a) cout<<a<<bl
#define cout2(a,b) cout<<a<<" "<<b<<bl
#define cout3(a,b,c) cout<<a<<" "<<b<<" "<<c<<bl
#define cout4(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<bl
#define print(azz,szz,ezz) for(ll i=szz;i<=ezz;i++){ cout<<azz[i]<<" "; }
#define rprint(azz,szz,ezz) for(ll i=szz;i>=ezz;i--){ cout<<azz[i]<<" "; }
#define input(azz,szz,ezz) sfor(pzz,szz,ezz) cin>>azz[pzz]
#define all(v) v.begin(),v.end()
#define ll long long
#define ldb long double
#define db double
#define ull unsigned long long
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mk make_pair
#define pll pair<ll,ll>
#define pldb pair<ldb,ldb>
#define fi first
#define se second
#define vull vector<ull>
#define vll vector<ll>
#define vb vector<bool>
#define vldb vector<ldb>
#define vpll vector< pll >
#define vpldb vector< pldb >
#define pqmin priority_queue<ll,vector<ll>,greater<ll> >     //minheap
#define pq priority_queue<ll>                                //maxheap ll
#define pqpll priority_queue<pll>                            //maxheap pll
#define pqpllmin priority_queue<pll, vector<pll>, greater<pll> >   //minheap pll
#define mll map<ll,ll>
#define mldb map<ldb,ldb>
#define umll unordered_map<ll,ll>
#define sll set<ll>
#define usll unordered_set<ll>
#define sfor(i,azz,bzz) for (ll i = (azz); i <= (bzz); ++i)
#define rfor(i,bzz,azz) for (ll i = (bzz); i >= (azz); --i)
const ll mod = 1e9 + 7;
// const ll mod=998244353 ;

void solve(ll countu) {
  ll n;
  cin >> n;
  vll ant[n];
  umll mp;
  sfor(i, 0, n - 1)
  {
    ll m;
    cin >> m;
    sfor(j, 0, m - 1)
    {
      ll x;
      cin >> x;
      mp[abs(x)]++;
      ant[i].pb(x);
    }
    sort(all(ant[i]));
  }
  ll ans = 0;
  ll ex = 0;
  
  
  for (auto x : mp)
  {
    if (x.second > 1) ex++;
  }
  
  
  sfor(i, 0, n - 1)
  {
    sfor(j, 0, S(ant[i]) - 1)
    {
      ll curr = 0;
      if (mp[abs(ant[i][j])] > 1)
      {
        if (ant[i][j] > 0)
        {
          curr = S(ant[i]) - (j + 1);
        }
        else
        {
          curr = j;
        }
      }
      else
      {
        if (ant[i][j] > 0)
        {
          curr = lb(all(ant[i]), -1 * ant[i][j]) - ant[i].begin();
        }
        else
        {
          curr = S(ant[i]) - (ub(all(ant[i]), -1 * ant[i][j]) - ant[i].begin());
        }
      }
      ans += curr;

	}

}
  cout << ans + ex << bl;
}
int main()
{
  

  
  ll t = 1;
  cin >> t;
  sfor(i, 1, t)
  solve(i);


  return 0;
}
