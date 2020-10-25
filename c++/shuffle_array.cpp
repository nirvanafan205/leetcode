/*
	Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
	Return the array in the form [x1,y1,x2,y2,...,xn,yn].
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
		vector<int> shuffle(vector<int>& nums)
		{
			vector<int> other;

			int temp = n + 1;

			for(int i = 0; i < n; i++)
			{
				other.push_back(nums[i]);
				other.push_back(nums[i + n]);
			}

			return other;
		}	
};

int main()
{
	vector<int> v { 2, 5, 1, 3, 4, 7};
	int n = 3;

	Solution caller;

	caller.shuffle(v, n);
}
