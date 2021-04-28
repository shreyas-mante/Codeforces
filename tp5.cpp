#include <bits/stdc++.h>
using namespace std;

bool findPartiion(int arr[], int n,int k,int sum)
{
//    sum = 0;
    int i, j;
 
    // Calculate sum of all elements
//    for (i = 0; i < n; i++)
//        sum += arr[i];
// 
//    if (sum<2*k)
//        return false;
 
    bool part[sum / 2 + 1][n + 1];
 
   
    for (i = 0; i <= n; i++)
        part[0][i] = true;
 
   
    for (i = 1; i <= sum / 2; i++)
        part[i][0] = false;
 
    
    for (i = 1; i <= sum / 2; i++) {
        for (j = 1; j <= n; j++) {
            part[i][j] = part[i][j - 1];
            if (i >= arr[j - 1])
                part[i][j] = part[i][j]
                             || part[i - arr[j - 1]][j - 1];
        }
    }
    for(i=sum/2;i>=k;i--)
    {
        if(part[i][n])
        return true;
    }
 
    
 
    return false;
}

int main() {
 // your code goes here
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t;
 cin>>t;
 while(t--)
 {
     int n,k;
     cin>>n>>k;
     int arr[n];
     
     for(int i=0;i<n;i++)
     {cin>>arr[i];
         
     }
     int sum = 0;
     for(int i=0;i<n;i++)
     {sum+=arr[i];
         
     }
     sort(arr,arr+n,greater<int>());
     int flag=1;
     if(sum < 2*k)
     {
     	cout<<"-1"<<endl;
	 }
	 else
	 {
	 	
	
	     for(int i=1;i<=n;i++)
	     {
	        
	         
	         if (findPartiion(arr,i,k,sum) == true)
	         {
	             cout<<i<<'\n';
	             flag=0;
	             break;
	         }
	         
	     }
	     if(flag)
	     cout<<-1<<'\n';
 }
 }
 return 0;
}
