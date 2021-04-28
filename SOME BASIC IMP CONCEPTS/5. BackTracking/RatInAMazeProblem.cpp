#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solution[20][20];

void printSolution(int solution[][20] , int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<solution[i][j]<<" ";
		}
	}
	cout<<endl;

}

void mazeHelp(int maze[][20], int n, int solution[][20],int x,int y)
{
	if(x==n-1 && y==n-1) //Base Case
	{
		solution[x][y]=1;
		printSolution(solution,n);
		return;
	}
	
	if(x<0 || x>=n || y<0 || y>=n || maze[x][y]==0 || solution[x][y]==1) //Constraints
	{
		return;
	}
	
	solution[x][y]=1;
	mazeHelp(maze,n,solution,x-1,y); //UPWARD DIRETION
	mazeHelp(maze,n,solution,x+1,y); //DOWNWARD DIRECTION
	mazeHelp(maze,n,solution,x,y-1); //LEFT DIRECTION
	mazeHelp(maze,n,solution,x,y+1); //RIGHT DIRECTION
	solution[x][y]=0;

	
}


void ratInAMaze(int maze[][20] , int n)
{
	mazeHelp(maze,n,solution,0,0);
}
