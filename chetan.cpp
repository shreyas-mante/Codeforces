#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define bell(v) v.begin(),v.end()
#define take ll t; cin>>t; while(t--)
#define chetan ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	// your code goes here
	chetan;
	take{
	    ll n;
	    cin>>n;
	    vector<ll> a[n];
	    unordered_map<ll,ll> intmap;
	    for(ll i=0;i<n;i++){
	        ll m;
	        cin>>m;
	        for(ll j=0;j<m;j++){
	            ll y;
				cin >> y;
				intmap[abs(y)]++;
				a[i].push_back(y);
			}
    		sort(bell(a[i]));
	    }
	    ll collision=0;
	    ll maincollision=0;
		
		for(ll i=0;i<n;i++){
			for(ll j=0;j<a[i].size();j++){
				ll curc = 0;
			  	if (intmap[abs(a[i][j])] >= 2 ){
					if (a[i][j] >= 1){
				  		curc = a[i].size() - (j + 1);
					}
					else{
				  		curc = j;
					}
			  	}
			  	else{
					if (a[i][j] >= 1){
				  		curc = lower_bound(bell(a[i]), -1 * a[i][j]) - a[i].begin();
					}
					else{
				  		curc = a[i].size() - (upper_bound(bell(a[i]), -1 * a[i][j]) - a[i].begin());
					}
			  	}
			  	maincollision += curc;
			}
		}
		
		for (auto d: intmap){
			if (d.second > 1){
				collision++;
			}
		} 
	    cout<<maincollision+collision;
	    cout<<endl;
	}
	return 0;
}
