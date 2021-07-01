//leetcode 1351. Count Negative Numbers in a Sorted Matrix
/*
 Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise,
 return the number of negative numbers in grid.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> grid{ {4, 3, 2, -1} , {3, 2, 1, -1} , {1 , 1, -1, -2} , {-1, -1, -2, -3} };

	int row = grid.size();
	int columns = grid[0].size();
	int count = 0;

	for(int i = 0; i < row; i++)
	{
		for(int b = 0; b < columns; b++)
		{
			if(grid[i][b] < 0)
			{
				count++;
			}
		}
	}
}
//returned 8
//brute force checking all nums < 0
