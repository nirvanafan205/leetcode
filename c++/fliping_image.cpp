//832. Flipping an Image
/*
 Given an n x n binary matrix image, 
 flip the image horizontally
 then invert it
 return the resulting image.
 For example, flipping [1,1,0] horizontally results in [0,1,1]
 For example, inverting [0,1,1] results in [1,0,0].
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> nums{ { 1, 1, 0 } , { 1, 0, 1 } , { 0, 0, 0 } };
	vector<vector<int>> helper;

	int row = nums.size();
	int columns = nums[0].size();

	for(int i = 0; i < row; i++)
	{
		vector<int> input;

		for(int b = columns - 1; b > -1; b--)
		{
			if(nums[i][b] == 0)
			{
				nums[i][b] += 1;
				input.push_back(nums[i][b]);
			}

			else if(nums[i][b] == 1)
			{
				nums[i][b] -= 1 ;
				input.push_back(nums[i][b]);
			}
		}

		helper.push_back(input);
	}
}

// output
// 100
// 010
// 111
