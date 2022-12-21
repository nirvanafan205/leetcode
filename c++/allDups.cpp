#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	vector<int> nums{4, 3, 2, 7, 8, 2, 3, 1};
	unordered_map<int, int> freq;

	for(int i = 0; i < nums.size(); i++)
	{
		freq[nums[i]]++;
	}

	vector<int> count;
	for(auto x : freq)
	{
		if(x.second > 1)
		{
			count.push_back(x.first);	
		}
	}

	for(int i = 0; i < count.size(); i++)
	{
		cout << count[i] << endl;
	}
}
