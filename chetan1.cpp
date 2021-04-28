#include<bits/stdc++.h>
#include <iostream>

using namespace std;
 // Driver program to test the above function
int main()
{
    int t;
    cin>>t;
    while(t--)
	{
        int n,x,y;
        cin>>n>>x>>y;
        int arr[n];
        int r=-1;
        int res=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int v=0;
        int b=n;
        sort(arr, arr+n);
        for(int j=0;j<=2;j++)
		{
            for(int i=0;i<n;i++)
			{
                res+=arr[i];
                if(x<=res && res<=y)
				{
                    r=j;
                    cout<<"hey";
                    break;
                }
            }
           
//            int temp = arr[v];
//            arr[v] = arr[b-1];
//            arr[b-1] = temp;
			swap(arr[b-1],arr[v]);
            v++;
            b--;
            
        }    
        cout<<r<<endl;   
    }
    //cout << minSwaps(arr, n);
    return 0;
}
