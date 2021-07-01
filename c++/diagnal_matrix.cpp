#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> nums { {1, 2, 3} , {4, 5, 6} , {7, 8, 9} };
	int rows = nums.size();
	int columns = nums[0].size();
	int sum = 0;

	for(int i = 0; i < rows; i++)
	{
		for(int b = 0; b < columns; b++)
		{
			if(i == 0 && b == 0)
			{
				sum += nums[i][b];
			}

			else if(i == 0 && b == columns - 1)
			{
				sum += nums[i][b];
			}

			else if(i == rows - 1 && b == 0)
			{
				sum += nums[i][b];
			}

			else if(i == rows-1 && b == columns - 1)
			{
				sum += nums[i][b];
			}

			cout << nums[i][b] << " ";
		}

		cout << endl;
	}

	cout << endl;

	cout << sum << endl;
}
