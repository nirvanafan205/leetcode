#include <iostream>
#include <vector>
using namespace std;

class Solution
{
	public:
		bool threeConsecutiveOdds(vector<int>&arr)
		{
			bool odds = false;
			int count = 0;

			for(int i = 0; i < arr.size(); i++)
			{
				if(count == 3)
				{
					break;
				}

				else if(arr[i] % 2 == 1)
				{
					count++;	
				}

				else if(arr[i] % 2 == 0)
				{
					count -= count;
				}
			}

			if(count > 2)
			{
				odds = true;
			}

			return odds;
		}
};

int main()
{
	vector<int> nums{ 1, 1, 1};

	Solution caller;

	caller.threeConsecutiveOdds(nums);
}
