#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> gain{-5, 1, 5, 0, -7};
	vector<int> helper{0};

	for(int i = 0; i < gain.size(); i++)
	{
		int sum = 0;

		for(int b = 0; b < i + 1; b++)
		{
			sum += gain[b];
		}

		helper.push_back(sum);
	}

	sort(helper.begin(), helper.end() );

	int size = helper.size() - 1;

	cout << "this is the max:" <<  helper[size] << endl;
}

//leetcode 1732. Find the HIghest Altitude
//returned 1
