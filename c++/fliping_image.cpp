#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> nums{ { 1, 1, 0 } , { 1, 0, 1 } , { 0, 0, 0 } };

	int row = nums.size();
	int columns = nums[0].size();

	cout << "Rows: " << row << endl;
	cout << "Columns: " << columns << endl;

	for(int i = 0; i < row; i++)
	{
		for(int b = 0; b < columns; b++)
		{
			cout << nums[i][b] << " ";
		}
		cout << endl;
	}
	
	
}
