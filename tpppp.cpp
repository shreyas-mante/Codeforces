#include<bits/stdc++.h>
using namespace std;

#define NUM_FIELDS 4
struct SplitLine {
  std::string fields[NUM_FIELDS];
};

#define sampleio    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);



std::map<std::string, int> processData(std::vector<struct SplitLine> data) 
{
    map<string, int> ret_val;
    multimap<string , string >mp;
    set<string>s;
    for(int i=0;i<data.size();i++)
    {
    	s.insert(data[i].fields[2]);
	}
	
	for(int i=0;i<data.size();i++)
	{
		mp.insert({data[i].fields[2] , data[i].fields[3]});
	}
    vector<int>v;
    int mx = 0;
    for(auto it1 : s)
    {
    	for(auto it:mp)
	    {
	    	if(it1 == it.first)
	    	{
	    		mx = max(mx , stoi(it.second));
			}
		}
		v.push_back(mx);
		mx = 0;
	}
	

	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<data.size();j++)
		{
			if(stoi(data[j].fields[3]) == (v[i]))
			{
				int ans = stoi(data[j].fields[0]);
				ret_val.insert({data[j].fields[2],ans});
			}
		}    
	}
	
  return ret_val;
}

int main()
{
  sampleio;
  std::vector<struct SplitLine> input_data;
  while (!feof(stdin)) {
    struct SplitLine line;
    for (int i=0; i<NUM_FIELDS; i++) {
      if (i==NUM_FIELDS-1)
        std::getline(cin, line.fields[i]);
      else
        std::getline(cin, line.fields[i], ',');
    }
    if (line.fields[0] != "")
      input_data.push_back(line);
    
  }
  
  std::map<std::string, int> ret_val = processData(input_data);
  for (std::map<std::string, int>::iterator it = ret_val.begin();
       it != ret_val.end();
       it++) {
    cout << it->first << ": " << it->second << std::endl;
  }
  return 0;
	
}




