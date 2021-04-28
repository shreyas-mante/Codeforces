#include<iostream>
#include<string>
using namespace std;


int main()
{
int k;
string a;
string b;
cin>>a;
cin>>b;
string c = a+b;

int i=a.size();
int j=b.size();

cout<<i<<"\n"<<j;
cout<<c;

for(k=0;k<1;k++)
{
   char tmp = a[k];
   a[k]=b[k];
   b[k]=tmp;

}
cout<<a<<" "<<b;
return 0;
}


