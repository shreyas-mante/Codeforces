#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll num;
        map<ll,ll>mpp,m11,m22;
		ll arr11[100000],arr22[100000];
        map<ll,ll>::iterator it;
        vector<ll>v11,v22,v33,v44;
        cin>>num;
        
        for(ll i=0;i<num;i++)
        {
            cin>>arr11[i];
            v11.push_back(arr11[i]);
            mpp[arr11[i]]++;
            m11[arr11[i]]++;
        }

		
        for(ll i=0;i<num;i++)
        {
            cin>>arr22[i];
            v22.push_back(arr22[i]);
            mpp[arr22[i]]++;
            m22[arr22[i]]++;
        }

        ll check=0;
        
        
        for(it=mpp.begin();it!=mpp.end();it++)
        {
            if(it->second%2 != 0 )
            {
                check=1;
                break;
            }
        }


        if(check == 1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            ll check2=0;
            sort(v11.begin(),v11.end());
            sort(v22.begin(),v22.end());
            for(ll i=0;i<v11.size();i++)
            {
                if(v11[i]!=v22[i])
                {
                    check2=1;
                    break;
                }
            }
            if(check2 == 0)
            {
                cout<<"0"<<endl;
            }
            else
            {
            ll c=0;
            ll d=0;
              
               ll i=0,j=0;
               while(i<num && j<num)
			   {
                if(v11[i]==v22[j])
                {
                    i++;
                    j++;
                }
                else if(v11[i]<v22[j]){
                    v33.push_back(v11[i]);
                    i++;
                }
                else{
                    v33.push_back(v22[j]);
                    j++;
                }
               }
               
               while(i<num)
			   {
                v33.push_back(v11[i]);
                i++;
               }
               
               while(j<num)
			   {
                v33.push_back(v22[j]);
                j++;
               }

               map<ll,ll>::iterator op;
               op = mpp.begin();

               ll min = (op->first) *(2);
               ll sum=0;
               ll wh=0;
               for(int i=0;i<v33.size();i++)
			   {
                if(!(i&1))
				{
                    v44.push_back(v33[i]);
                }
                
               }
               
               
                ll c1 = v44.size()/2;
                
               for(ll i=0;i<v44.size();i++)
			   {
                if(v44[i]<min && wh<c1){
                    sum = sum + v44[i];
                    wh++;
                }
                else
				{
                    break;
                }
                
               }
               
               if(c1-wh>0)
               sum = sum+ (c1-wh)*min;
               cout<<sum<<endl;
            }
        }
    }
}
