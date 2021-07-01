//leetcode 1051. Height Checker
/*
 A school is trying to take an annual photo of all the students.
 The students are asked to stand in a single file line in non-decreasing order by height.
 Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.
 You are given an integer array heights representing the current order that the students are standing in.
 Each heights[i] is the height of the ith student in line (0-indexed).
 Return the number of indices where heights[i] != expected[i]
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> heights { 1, 1, 4, 2, 1, 3 };

	vector<int> check = heights;

	sort(check.begin(), check.end() );

	int count = 0;

	for(int i = 0; i < check.size(); i++)
	{
		if(check[i] != heights[i])
		{
			count++;
		}
	}

	cout << count << endl;
}

//output: 3
