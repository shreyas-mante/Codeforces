#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
  ll t,n,i,k,temp,j;
  cin>>t;
  while(t--)
  {
    multiset<int> mst;
    cin>>n;
    vector<int> v[n];
    for(i=0;i<n;i++)
	{
        cin>>k;
	     for(j=0;j<k;j++)
		 {
	      cin>>temp;
	      v[i].push_back(temp);
	  	 }
    }
    
    vector<ll> ans;
    ll res=0;
    for(i=0;i<n;i++)
	{
     ll prev=v[i][0],count=1;
     vector<ll> gpt;
     for(j=1;j<v[i].size();j++)
	 {
      ll u=v[i][j];
     if(prev<u){
            count++; 
      prev=u;
     }
     else
	 {
      gpt.push_back(count);
      prev=u;
      count=1;
     }
    }
    gpt.push_back(count);
    ll l=0, r=gpt.size()-1;
    while(r>l)
	{
     if(gpt[r]>gpt[l])
	 {
      res=gpt[l]+res;
      ans.push_back(gpt[l]); 
             l++;
     
     }
     else
	 {
      res+=gpt[r];
      ans.push_back(gpt[r]); r--;
     }
     
    }
    ans.push_back(gpt[l]);
    }
    for(auto it:ans) 
       mst.insert(it);

    while(mst.size()!=1)
	{
     auto it = mst.begin();auto opp = mst.begin();opp++;
        ll ress = *it + *opp;res += ress;
        mst.erase(it);it = mst.begin(); mst.erase(it);mst.insert(ress);
    }
    cout<<res<<endl;
  }
return 0;
}
