
#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
	int n,m,k;
	cin>>n>>m>>k;
	vector <int> res;
for(int i=0; i<n; i++)
{
	map <int,int> m;
	map<int ,int>::iterator x;
	for(int j=0; j<k; j++)
	{
	int num;
	cin>>num;
	m[num]++;
	}
	 x = max_element(m.begin(), m.end(),[](const pair<int,int>&p1, const pair<int,int>&p2) {
		return p1.second < p2.second; });
		res.push_back(x->first);
}

for (int a=0; a<res.size(); a++){
    

cout <res[a]<<" ";
}

cout<<endl;
return 0;

}


