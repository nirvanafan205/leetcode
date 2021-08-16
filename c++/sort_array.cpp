#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums {5, 2, 3, 1};

	sort(nums.begin(), nums.end() );

	for(int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << endl;
	}
}

/*
 leetcode 912: Sort an Array
 Given an array of integers nums,
 sort the array in ascending order.
 output: 1, 2, 3, 5
*/
