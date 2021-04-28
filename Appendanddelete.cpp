#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int n;
	cin>>n;
	int c=0;
	for(int i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==s2[i])
		{
			c++;
		}
	}
	
	
	int reallen=s1.length()-c;
	int othelen=s2.length()-c;
	int total1 =abs(reallen-othelen);
	int total =reallen+total1;
	
	if(total==c)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
	
}
