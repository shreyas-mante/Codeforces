// Area of Polygon = Triangulation Method = (|AB X AC|)/2 for every triangle


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll n;
	cin>>n; // no of points
	vector<ll>x,y;
	ll ans,ans1;
	
	for(ll i=0;i<n;i++)
	{
		cin>>ans>>ans1;
		x.push_back(ans);
		y.push_back(ans1);
	}
	ll area = 0;
	for(ll i=1;i<n-1;i++)
	{
		ll x1 = x[i] - x[0];
		ll y1 = y[i] - y[0];
		ll x2 = x[i+1] - x[0];
		ll y2 = y[i+1] - y[0];
		
		area = area + (x1*y2 - x2*y1);	// cross - product
	}
	
	cout<<abs(area/2)<<endl; // cross-product/2
}
