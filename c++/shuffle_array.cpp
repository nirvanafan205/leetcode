#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
		void shuffle(vector<int>& nums, int n)
		{
			vector<int> x;
			vector<int> y;

			int temp;

			for(int i = 0; i < n; i++)
			{
				temp = nums[i];
				x.push_back(i);
			}

			for(int x = nums.size() - 1; x >= n; x--)
			{
				temp = nums[x];
				y.push_back(x);
			}	

			for(in b = 0; b < n * 2; b++)
			{

			}

		}	
};

int main()
{
	Solution obj;

	vector<int> nums;

	int n = 3;

	for(int i = 0; i < 6; i++)
	{
		nums.push_back(i);
	}

	obj.shuffle(nums, n);
}
