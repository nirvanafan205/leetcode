/*
	We are given a list nums of integers representing a list compressed with run-length encoding.
	Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0). 
	For each such pair, there are freq elements with value val concatenated in a sublist.
	Concatenate all the sublists from left to right to generate the decompressed list.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
		vector<int> decompressRLElist(vector<int>& nums)
		{
			vector<int> help;

			for(int i = 0; i < nums.size(); i++)
			{
				if(i % 2 == 0 || i == 0)
				{
					for(int a = 0; a < nums[i]; a++)
					{
						help.push_back(nums[i + 1]);
					}
				}
			}

			return help;
		}
};

int main()
{
	vector<int> nums = { 1, 2, 3, 4 };

	Solution caller;

	caller.decompressRLElist(nums);
}
