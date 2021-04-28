#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
ll *segtree; //st


ll __GCD(ll soso, ll me, ll l, ll r, ll si) 
{ 
	if (soso>r || me < l) // base case 1
	{
		return 0;
	} 
	 
	if (l <= soso && r >= me) // base case 2
	{
		return segtree[si]; 
	}
	
	ll mid = soso+(me-soso)/2; 
	return __gcd(__GCD(soso, mid, l, r, si*2+1), __GCD(mid+1 , me , l , r , si*2+2)); 
} 




ll rrq(ll soso, ll me, ll arr[],ll n) 
{ 
	if (soso<0 || me > n-1 || soso>me) 
	{ 
		cout << "Invalid Arguments" << "\n"; 
		return -1; 
	} 
	return __GCD(0, n-1, soso, me, 0); 
} 

ll createSeg(ll arr[], ll soso,ll me, ll si) 
{ 
	if (soso == me) 
	{ 
		segtree[si] = arr[soso]; 
		return segtree[si]; 
	} 
	// cout<<segtree[si]<<endl;
	ll mid = soso + (me-soso)/2; 
	segtree[si] = __gcd(createSeg(arr, soso, mid, si*2+1), createSeg(arr, mid+1, me, si*2+2)); 
	return segtree[si]; 
} 


ll *constructSegmentT(ll arr[], ll n) 
{ 

	ll height = (ll)(ceil(log2(n))); 
	ll size = 2*(ll)pow(2, height)-1; 
	segtree = new ll[size]; 
	createSeg(arr, 0, n-1, 0); 
	return segtree; 

} 


int main() 
{ 
	ll n,q;
	cin>>n>>q;
	ll arr[n];
	
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}

 
	constructSegmentT(arr, n); 
	ll sum  = 0;
	while(q--)
	{
		ll l,r;
		cin>>l>>r;
		sum = sum + rrq(l, r, arr, n);
	}
	cout<<sum<<endl;

	 
} 

