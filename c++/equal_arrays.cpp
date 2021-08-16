#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> target {1, 2, 3, 4};
	vector<int> arr {2 , 4, 1, 3};

	sort(target.begin(), target.end() );
	sort(arr.begin(), arr.end() );
	
	int i = 0;
	bool check = true;

	for(int i = 0; i < arr.size(); i++)
	{
		if(target[i] != arr[i])
		{
			check = false;
		}
	}
}
/*
 leetcode 1460: Make Two Arrays Equal by Reversing Sub-arrays
 Given two integer arrays of equal length target and arr.
 In one step, you can select any non-empty sub-array of arr and reverse it.
 You are allowed to make any number of steps.
 Return True if you can make arr equal to target, or False otherwise.
 output: true
*/
