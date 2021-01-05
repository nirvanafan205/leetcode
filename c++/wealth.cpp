/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith customer has in the jth bank. 
Return the wealth that the richest customer has. A customer's wealth is the amount of money they have in all their bank accounts.
The richest customer is the customer that has the maximum wealth. 
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> nums;

	vector<int> first;
	vector<int> second;
	int max;
	vector<int> wealth;

	for(int i = 0; i < 3; i++)
	{
		first.push_back(i);
	}

	for(int x = 0; x < 3; x++)
	{
		second.push_back(x * 2);
	}

	nums.push_back(first);
	nums.push_back(second);

	for(int b = 0; b < nums.size(); b++)
	{
		int count = 0;

		for(int k = 0; k < nums[b].size(); k++)
		{
			count += nums[b][k];
		}

		wealth.push_back(count);

	}

	max = wealth[0];

	for(int l = 0; l < wealth.size(); l++)
	{
		if(wealth[l] >= max)
		{
			max = wealth[l];
		}
	}

	cout << max << endl;

}
