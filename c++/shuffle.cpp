#include <iostream>
#include <string>

using namespace std; 

int main()
{
	vector<int> indices{4, 5, 6, 7, 0, 2, 1, 3};
	string s = "codeleet";
	char words[indices.size()];
	string other = "";

	for(int i = 0; i < s.size(); i++)
	{
		int num = indices[i];
		words[num] =  s[i];
	}

	for(int b = 0; b < s.size(); b++)
	{
		other = other + words[b];
	}

	cout << other << endl;
}
// leetcode: 1528. Shuffle String
// output: leetcode

/*
Given a string s and an integer array indices of the same length.
The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.
Return the shuffled string. 
*/
