#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll A[100010];
ll OddEvenShreyas[100010];
ll EvenMante[100010];
int main()
{
   // freopen("input.txt","r",stdin);
    int tt;
    cin>>tt;
    while(tt--)
    {
        ll n1;
        cin>>n1;
        for(ll i=0;i<n1;i++)
        {
            ll temp;
            cin>>temp;
            A[i]=abs(temp);
        }
        for(ll i=0;i<n1;i++)
        {
            if(A[i]&1)
            OddEvenShreyas[i]=0;
            else
            {
                OddEvenShreyas[i]=1;
            }
            
        }
        long long ans=0;
        ll cnt=0;
        vector<pair<ll,ll> >v;

        for(int i=0;i<n1;)
        {
            
            if(OddEvenShreyas[i]==1)
            {
                //cout<<A[i]<<endl;
                cnt=1;
                ll start=i;
                i++;
                while(OddEvenShreyas[i]==1)
                {
                    cnt++;
                    i++;
                }
               // ans=ans+(cnt*(cnt+1))/2 -cnt;
                ll End=i-1;
                v.push_back({start,End});

            }else
            {
                i++;
            }
            
            

        }
        sort(v.begin(),v.end());
        ans=(n1*(n1+1))/2;
        //cout<<ans<<endl;
        //cout<<v.size()<<endl;
        int prev=-1;
        for(int i=0;i<v.size();i++)
        {
            ll start=v[i].first,End=v[i].second;
           // cout<<start<<" "<<End<<endl;
            if((A[start]/2)&1)
            {
                ll temp=start-prev-1;
                ans-=temp;
               // cout<<"start:"<<ans<<endl;
                if(start==End)
                {
                    if(i+1<v.size())
                    {
                        ans=ans-(v[i+1].first-start-1)*(temp);
                    }else
                    {
                        ans=ans-(n1-start-1)*(temp);
                    }
                  //  cout<<"Mid:"<<ans<<endl;
                    
                }
                
               

            }
            if((A[End]/2)&1)
            {
                ll temp;
                if(i+1<v.size())
                { temp=v[i+1].first-End-1;
                ans-=temp;
                }
                else
                {
                    temp=n1-End-1;
                    ans-=temp;
                    
                }
                
              //  cout<<"End:"<<ans<<endl;


            }
            prev=End;
            

        }
       // cout<<ans<<endl;
        for(int i=0;i<n1;i++)
        {
            if(A[i]%2==0&&(A[i]/2)&1)
            ans--;
        }
        cout<<ans<<endl;
        


    
    }

}
