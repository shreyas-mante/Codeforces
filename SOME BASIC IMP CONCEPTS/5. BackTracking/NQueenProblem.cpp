#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll board[11][11];

bool isPossible(ll n, ll row , ll column)
{
	//Vertical Condition Checking
	for(ll i=row-1;i>=0;i--)
	{
		if(board[i][column]==1)
		{
			return false;
		}
	}
	
	
	//Left Diagonal Condition
	for(ll i=row-1,j=column-1;i>=0 && j>=0;i--,j--)
	{
		if(board[i][j]==1)
		{
			return false;
		}
	}
	
	//Right Diagonal Condition
	for(ll i=row-1,j=column+1;i>=0 && j<n;i--,j++)
	{
		if(board[i][j]==1)
		{
			return false;	
		}	
	} 
	
	//When All three Conditions are false , then it is a possible position for queen
	return true;
}

void NQueenHelper(ll n , ll row)
{
	if(row==n) //Base Case
	{
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				cout<<board[i][j]<<" ";
			}
			cout<<"\n";
		}
		
		cout<<endl;
		return;
	}
	
	for(ll j=0;j<n;j++)
	{
		if(isPossible(n,row,j))
		{
			board[row][j]=1;
			NQueenHelper(n,row+1);
			board[row][j]=0;
		}
	}
	return;
}

void placeNQueens(ll n)
{
	memset(board,0,11*11*sizeof(int));
	NQueenHelper(n,0);
}

int main()
{
	ll n;
	cin>>n;
	placeNQueens(n);
}
