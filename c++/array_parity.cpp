#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> A{3, 1, 2, 4};
	vector<int> even;
	vector<int> odd;

	for(int i = 0; i < A.size(); i++)
	{
		if(A[i] % 2 == 0)
		{
			even.push_back(A[i]);
		}

		else
		{
			odd.push_back(A[i]);
		}
	}

	sort(even.begin(), even.end() );
	sort(odd.begin(), odd.end() );

	for(int b = 0; b < odd.size(); b++)
	{
		even.push_back(odd[b] );
	}

	for(int a = 0; a < even.size(); a++)
	{
		cout << even[a] << endl;
	}
}
// leetcode: 905. Sort Array By Parity
// output: 2, 4, 1, 3

/*
	Given an array nums of non-negative integers,
       	return an array consisting of all the even elements of nums,
       	followed by all the odd elements of nums.
*/
