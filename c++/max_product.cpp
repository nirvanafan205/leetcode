/*
The product difference between two pairs (a, b) and (c, d) is defined as (a * b) - (c * d).
Given an integer array nums, choose four distinct indices w, x, y, and z
such that the product difference between pairs (nums[w], nums[x]) and (nums[y], nums[z]) is maximized.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> nums = { 5, 6, 2, 7, 4};
	int size = nums.size() - 1;

	/*
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size - i; j++)
		{
			if(nums[j] > nums[j + 1])
			{
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
	*/

	sort(nums.begin(), nums.end() );

	int max = nums[size] * nums[size - 1];
	int min = nums[0] * nums[1];
	int product = max - min;

	cout << product << endl;
}

//leetcode problem 1913. Maximum Product Difference Between Two Pairs
//output 34
