#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> mat {{10,16,1,7,20,5,2,15},{10,4,14,4,1,1,15,9},{5,14,14,13,1,8,14,2},{12,1,10,12,8,16,2,14},{1,10,9,15,19,10,8,1},{20,19,13,16,5,5,15,16},{17,15,9,10,10,14,4,1},{7,16,14,2,3,1,5,18}}; 

	int rows = mat.size();
	int columns = mat[0].size();
	int sum = 0;

	if(columns % 2 == 1)
	{
		for(int i = 0; i < rows; i++)
		{
			for(int b = 0; b < columns; b++)
			{
				if((i == 0 || i ==  rows - 1) && (b == 0 || b == columns - 1) )
				{
					//sum += mat[i][b];
					cout << mat[i][b] << endl;
				}
				
				else if((i == 1 || i == rows - 2) && (b == 1 || b == columns - 2) )
				{
					//sum += mat[i][b];
					cout << mat[i][b] << endl;
				}

				else if( (i == rows / 2) && (b == columns / 2) )
				{
					cout << mat[i][b] << endl;
				}
			}
		}
	}

	else if(columns % 2 == 0)
	{
		for(int i = 0; i < rows; i++)
		{
			for(int b = 0; b < columns; b++)
			{
				if((i == 0 || i == rows - 1) && (b == 0 || b == columns - 1) )
				{
					sum += mat[i][b];
					cout << mat[i][b] << endl;
				}

				else if((i == 1 || i == rows - 2) && (b == 1 || b == columns - 2) )
				{
					sum += mat[i][b];
					cout << mat[i][b] << endl;
				}

				else if( (i > 1 && i < rows - 2) && (b > 1 && b < columns - 2) )
				{
					sum += mat[i][b];	
					cout << mat[i][b] << endl;
				}
			}
		}
	}

}
