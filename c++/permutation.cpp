#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums {5, 0, 1, 2, 3, 4};
	vector<int> other;

	for(int i = 0; i < nums.size(); i ++)
	{
		other.push_back(nums[nums[i]]);
	}

	//returned 4, 5, 0, 1, 2, 3
}

//leetcode 1920. Build Array from Permutation
/*
 Given a zero-based permutation nums (0-indexed),
 build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.
 A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).
 */
