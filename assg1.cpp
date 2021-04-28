#include<iostream>
using namespace std;

class Student
{
	public:
 	int i;
	int sum=0;
	int marks;
	void get();
};


void Student::get()
{
	
	cout<<"ENTER MARKS";
	cin>>marks;
	
}

void avg(Student s[],int n)
{
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+s[i].marks;
		
		
	}
	
	int avg = sum/n;
	cout<<"AVERAGE MARKS OF STUDENTS "<<avg<<"\n";
}

void highlow(Student s[],int n)
{
	int i;
	int val=s[0].marks;
	int cval=s[0].marks;
	for(i=0;i<n;i++)
	{
		
				if(val<s[i].marks)
				{
					
					val = s[i].marks;
				}	
	}
	
	cout<<"HIGHEST MARKS ARE "<<val<<endl;
	
	for(i=0;i<n;i++)
	{
		
		if(cval>s[i].marks)
		{
			cval=s[i].marks;
			
		}
		
	}
	
	cout<<"LOWEST NUMBER IS "<<cval<<"\n";
}



void absent(Student s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(s[i].marks==0)
	{
		
		cout<<"NUMBERS ABSENT ARE "<<s[i].marks<<"\n";
		
		}	
		
	}	
}



int main()
{
	Student s[20];
	int n;
	cout<<"ENTER NO OF STUDENTS";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		s[i].get();
		
	}
	
	avg(s,n);
	highlow(s,n);
	absent(s,n);
	return 0;
		
}
