#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums{3, 2, 4, 1, 1, 5, 1, 3, 5, 1};
	vector<int> helper;
	int size = nums.size() - 1;

	sort(nums.begin(), nums.end());


	for(int i = 0; i < nums.size() / 2; i++)
	{
		int sum = nums[i] + nums[size];	
		size--;

		helper.push_back(sum);
	}

	sort(helper.begin(), helper.end() );

	int other = helper.size();

	cout << helper[other - 1] << endl;
}
//leet code 1877. Minimize Maximum Pair Sum in Array
