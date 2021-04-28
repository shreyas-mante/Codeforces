#include <bits/stdc++.h>
using namespace std;

 
bool solve(int  n2[], int n,int  n3)
{

     
    int  n4 = 0;

     
    int i,  n5;
 
     
    for (i = 0; i < n; i++)
         n4 +=  n2[i];
 
    bool  n6[ i / 2 + 1][n4 + 1];
     
 
     
    for (i = 0; i <= n; i++)
         n6[0][i] = true;
 
     
    for (i = 1; i <=  n4 / 2; i++)
         n6[i][0] = false;
 
     
    for (i = 1; i <=  n4 / 2; i++) {
        for ( n5 = 1;  n5 <= n;  n5++) {  
             n6[i][ n5] =  n6[i][ n5 - 1];
            if (i >=  n2[ n5 - 1])
                 n6[i][ n5] =  n6[i][ n5]
                             ||  n6[i -  n2[ n5 - 1]][ n5 - 1];
        }
    }
    for(i= n4/2;i>= n3;i--)  
    {

         
        if( n6[i][n])
        return true;
    }
 
    
     
    return false;
}

 
int main() {
  
 ios_base::sync_with_stdio(false);
  
    cin.tie(NULL);
     
int n8;
  cin>>n8;
  
 while(n8--)
 {
      
     int n, n3;           
     int  n2[n];     
     cin>>n>>n3;
     for(int i=1;i<=n;i++)
     {cin>> n2[i-1];      
         
     }    
     
     int  n1=1;

      
     for(int i=1;i<=n;i++)
     {
         
          if (solve( n2,i, n3) == true)
         {                                  
              n1=0;             
             break;              
         }
         
     }
     if( n1)
     cout<<-1<<'\n';
     
 }  
 return 0;
}
