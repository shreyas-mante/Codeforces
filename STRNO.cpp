#include<bits/stdc++.h>
using namespace std;


bool getans1(int k,vector<int>v,int size)
{
	int b=0;
			for(int i=0;i<size;i++)
			{
				bool flag=1;
					for(int j=2;j<=sqrt(v[i]);j++)
					{
							if(v[i]%j==0)
							{
								flag=0;
								break;
							}
					}
					if(flag==1 && v[i]!=1)
					{
						b++;	
					}			
			}
			if(b==k)
			{
				return true;
			}
			else
			{
			return false;
			}
}
bool getans(int n,int k)
{
	
	vector<int>v;
	int p=0;
	for(int j=1;;j++)
	{
			int c=0;
			p=0;
			int i=1;
			while(i<=j)
			{
				if(j%i==0)
				{
					c++;
					v.push_back(i);	
				}
				if(c==n)
				{
					p=1;
					goto a;
					
					break;
				}
				i++;		
			}
			v.clear();			
	}
	a:
		
		if(p==1)
		{
			int size=v.size();
			if(getans1(k,v,size))
			{
				return true;
			}
			else{
				return false;
			}
			
		}
		else
		{
			return false;
		}
}
int main()
{
	int test;
	int n,k;
	cin>>test;
	while(test--)
	{
		cin>>n>>k;
		
		if(getans(n,k))
		{
			cout<<"1"<<endl;
		}
		else
		{
		    cout<<"0"<<endl;
		}
	}
}
