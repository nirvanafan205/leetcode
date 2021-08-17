#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> nums {4, 2, 5, 7};
	sort(nums.begin(), nums.end() );
	vector<int> even;
	vector<int> odd;
	vector<int> other;

	for(int i = 0; i < nums.size(); i++)
	{
		if(nums[i] % 2 == 0)
		{
			even.push_back(nums[i]);
		}

		else if(nums[i] % 2 == 1)
		{
			odd.push_back(nums[i]);
		}
	}

	for(int i = 0; i < even.size(); i++)
	{
		other.push_back(even[i]);
		other.push_back(odd[i]);

	}
}

/*
 leetcode 922: Sort Array By Parity II
 Given an array of integers nums, half of the integers in nums are odd, and the other half are even.
 Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.
 Return any answer array that satisfies this condition.
 output: 2, 5, 4, 7 
*/
