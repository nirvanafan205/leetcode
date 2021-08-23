#include <iostream>
#include <vector>

using namespace std;

int arraySign(vector<int> nums, int check);

int main()
{
	vector<int> nums {-1, -2, -3, -4, 3, 2, 1};
	int sign = nums[0];

	sign = arraySign(nums, sign);

	cout << sign << endl;
}

int arraySign(vector<int> nums, int check)
{
	for(int i = 1; i < nums.size(); i++)
	{
		if(nums[0] == 0)
		{
			return 0;			
		}

		else if(nums[i] < 0)
		{
			check *= -1;
		}

		else if(nums[i] > 0)
		{
			check *= 1;
		}
	}

	if(check < 0)
	{
		return -1;
	}

	else if(check > 0)
	{
		return 1;
	}

	else
	{

		return check;
	}
}

/*
 leetcode 1822: Sign of the Product of an Array
 You are given an integer array nums. Let product be the product of all values in the array nums.
 Return signFunc(product).

 1 if x is positive.
 -1 if x is negative.
 0 if x is equal to 0.

output: 1
*/
