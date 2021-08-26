
Node intersection(Node *head1 , Node *head2)
{
	Node * temp1 = head1;
	Node * temp2 = head2;
	
	int count1 = 0;
	int count2 = 0;
	
	while(temp1 != NULL)
	{
		count1++;
		temp1=temp1->next;
	}
	while(temp1 != NULL)
	{
		count1++;
		temp1=temp1->next;
	}
	
	int count3 = abs(count1 - count2);
	
	Node *temp3 
	
}



vector<int>v(300 , 0);
int result = 0;

result = max(result , j-i+1)

v - 1   0  0 0 0 0 0 0 0 0
	j
			i
v[s[0]]++;

pwwkew


v[s[0]]++;
0 1 2 3 4 5 6 7 	
1 0 0 0 0 0 0 0 
  j
  i
  
  
  

int main()
{
	string s;
	cin>>s;
	
	vector<int>v(305 , 0);
	v[s[0]]++;
	
	int j = 0;
	int i = 0;
	int result = 0;
	
	
	res = 2;
	  w
	p w  k e w
	0 1  3 4 5
	0 0  1 1 0
	       j
	    i
	
	a
	awadka
	  
	
	while(j != s.size()-1)
	{
		if(v[s[j+1]] == 0)
		{
			j++;
			v[s[j]] = 1;
			result = max(result , j - i + 1);
		}
		else
		{
			v[s[i]]--;
			i++;
		}
	}
	cout<<result<<endl;
}



int main()
{
	
	int lmax[n];
	int rmax[n];
	lmax[0] = arr[0];
	for(int i=1;i<n;i++)
	{
		lmax[i] = max(lmax[i-1],arr[i]);
	}
	
	rmax[n-1] = arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		rmax[i] = max(rmax[i+1],arr[i]);
	}
	
	int result = 0;
	
	for(int i=0;i<n;i++)
	{
		res = res + min(rmax[i],lmax[i]) - arr[i];
	}
	
	return res;
	
	
}









































