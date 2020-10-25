#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
		void shuffle(vector<int>& nums)
		{
			vector<int> other;

			for(int i = 0; i < nums.size() / 2 ; i++)
			{

				other.push_back(nums[i]);
				other.push_back(nums[i + 3] );
			}

			for(int b = 0; b < other.size(); b++)
			{
				if(b != 0)
				{
					cout << ", ";
				}

				cout << other[b];
			}
		}	
};

int main()
{
	vector<int> v { 2, 5, 1, 3, 4, 7};

	Solution caller;

	caller.shuffle(v);
}
