// Number of Balanced Binary Tree is = (x*x + 2*x*y) OR (x^2 + 2xy).

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int balancedBTs(int h)
{
	if(h==0 || h==1)
	{
		return 1;
	}
	
	int x = balancedBTs(h-1);
	int y = balancedBTs(h-2);
	
	int M = pow(10,9)+7;
	
	long res1 = (long)(x*x);
	long res2 = (long)(x*y*2);
	
	int ans1 = (int)(res1%M);
	int ans2 = (int)(res2%M);
	
	int res = (ans1+ans2)%M;
	return res;
}

int main()
{
	int h;
	cin>>h;
	cout<<balancedBTs(h)<<endl;
}
