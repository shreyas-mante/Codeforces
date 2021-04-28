#include<bits/stdc++.h>
using namespace std;
#define ll long long
int st[8008], a[2001];
int build(int ss, int se, int si)  
{  
    if (ss == se)  
    {  
        st[si] = a[ss];  
        return a[ss];  
    }  

    int mid = ss + (se-ss)/2;   
    st[si] = min(build(ss, mid, si*2+1), build(mid+1, se, si*2+2));  
    return st[si];  
} 

int rangemin(int ss, int se, int qs, int qe, int index)  
{  
  
    if (qs <= ss && qe >= se)  
        return st[index];  
  
    if (se < qs || ss > qe)  
        return INT_MAX;  
    int mid = ss + (se-ss)/2;  
    return min(rangemin(ss, mid, qs, qe, 2*index+1), rangemin(mid+1, se, qs, qe, 2*index+2));  
}  
 
int main()
{
    ll n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
    	cin >> a[i];
    build(0, n-1, 0);
    ll ans = 100000000000000;
    for(int i = 0; i < n; i++)
    {
    	ll temp = x*i;
    	for(int j = 0; j < n; j++)
    	{
    		int mn = INT_MAX;
    		if(j >= i)
    			mn = rangemin(0, n-1, j-i, j, 0);
    		else
    			mn = min(rangemin(0, n-1, 0, j, 0), rangemin(0, n-1, (n-1)-(i-j-1), n-1, 0));
    		temp += mn;
    	}
    	ans = min(ans, temp);
    }
    cout << ans << endl;
}
