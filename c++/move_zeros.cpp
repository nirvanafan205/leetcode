#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums {0, 1, 0, 3, 12};
	vector<int> other;
	int count = 0;

	for(int i = 0; i < nums.size(); i++)
	{
		if(nums[i] != 0)
		{
			int input = nums[i];
			other.push_back(input);
		}

		else if(nums[i] == 0 )
		{
			count++;
		}
	}

	int check = 0;

	while(check != count)
	{
		other.push_back(0);
		check++;
	}

	for(int a = 0; a < other.size(); a++)
	{
		cout << other[a] << endl;
	}
}
/*
 leetcode 238: move zeros 
 Given an integer array nums,
 move all 0's to the end of it while maintaining the relative order of the non-zero elements. 
 0, 1, 0, 3, 12 -> 1, 3, 12, 0, 0
*/
