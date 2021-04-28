//Point of Intersection between Two Lines


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

double point_of_intersection(double x1,double y1,double x2,double y2 , double x3,double y3,double x4,double y4)
{
	double a1,b1,c1,a2,b2,c2;
	
	a1 = y2-y1;
	b1 = x1-x2;
	c1 = a1*x1 + b1*x2;
					
	a2 = y4-y3; 
	b2 = x3-x4; 
	c2 = a2*x3 + b2*x4;
	
	double determinant = a1*b2 - a2*b1;
	if(determinant == 0) // Lines are parallel
	{
		cout<<"Lines are parallel"<<endl;
	}
	else
	{
		double x = (b2*c1 - b1*c2)/determinant;
		double y = (a1*c2 - a2*c1)/determinant;
		cout<<"Points are "<<" "<<x<<" "<<y<<endl;
	}
}

int main()
{
	double x1,y1,x2,y2,x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	
	cout<<point_of_intersection(x1,y1,x2,y2,x3,y3,x4,y4)<<endl;
	
}
