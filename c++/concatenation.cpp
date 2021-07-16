#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums {1, 2, 1};
	int size = nums.size();

	for(int i = 0; i < size; i++)
	{
		nums.push_back(nums[i]);
	}
}

/* leetcode: 1929. Concatenation of Array
*Given an integer array nums of length n,
you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

output: 1, 2, 1, 1, 2, 1
*/

