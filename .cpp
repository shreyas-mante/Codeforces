#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s,s1;
    vector<string>v;
    
    long int n;
    int *arr=new int[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
        s1=s1+s;
        
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=count(s1.begin(),s1.end(),v[i]);
        
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    
    
   
    
    
    
    
}
