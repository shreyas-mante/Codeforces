#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 9

bool isSafeGrid(int grid[N][N],int row ,int col,int num)//Comapre 3X3 Matix for row & col
{
	int rowFactor = row - (row%3);
	int colFactor = col - (col%3);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(grid[i+rowFactor][j+colFactor]==num)
			{
				return false;
			}
		}
	}
	
	return true;
}

bool isSafeCol(int grid[N][N],int col,int num)//Compare num with col
{
	for(int i=0;i<N;i++)
	{
		if(grid[i][col]==num)
		{
			return false;
		}
	}
	return true;
}

bool isSafeRow(int grid[N][N], int row ,int num)//Compare num with row
{
	for(int i=0;i<N;i++)
	{
		if(grid[row][i]==num)
		{
			return false;
		}
	}
	return true;
}

bool isSafe(int grid[N][N],int row,int col,int num)//Checking All 3 conditions
{
	if(isSafeRow(grid,row,num) && isSafeCol(grid,col,num) && isSafeGrid(grid,row,col,num))
	{
		return true;
	}
	return false;
}

bool findEmptyPosition(int grid[N][N], int &row ,int &col)//Finding Empty Position(0) in Sudoku
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(grid[i][j]==0)
			{
				row=i;
				col=j;
				return true;
			}
		}
	}
	return false;
}

bool solveSudoku(int grid[N][N])
{
	int row,col;
	if(!findEmptyPosition(grid,row,col))
	{
		return true;
	}
	
	for(int i=1;i<=9;i++)
	{
		if(isSafe(grid,row,col,i))//Checking All values of i to insert in sudoku
		{
			grid[row][col]=i;
			if(solveSudoku(grid))//Checking the Sudoku matrix is correct or not
			{
				return true;
			}
			grid[row][col]=0;
		}
	}
	
	return false;
}

int main()
{
	int grid[N][N];
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>grid[i][j];
		}
	}
	
	solveSudoku(grid);
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
}
