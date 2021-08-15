#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string s = "MerryChristmas";
	vector<char>first;
	vector<char>second;
	int first_check = 0;
	int second_check = 0;
	int size = s.size() - 1;
	bool determine = true;

	for(int i = 0; i < s.size() / 2; i++)
	{
		first.push_back(s[i]);
		second.push_back(s[size]);
		size--;
	}

	for(int f = 0; f < first.size(); f++)
	{
		char check1 = first[f];
		char check2 = second[f];

		if((check1 == 65) || (check1 == 69) || (check1 == 73) || (check1 == 79) || (check1 == 85))
		{
			first_check++;
		}

		if((check2 == 65) || (check2 == 69) || (check2 == 73) || (check2 == 79) || (check2 == 85))
		{
			second_check++;
		}

		if((check1 == 97) || (check1 == 101) || (check1 == 105) || (check1 == 111) || (check1 == 117))
		{
			first_check++;
		}

		if((check2 == 97) || (check2 == 101) || (check2 == 105) || (check2 == 111) || (check2 == 117))
		{
			second_check++;
		}	
	}

	if(first_check != second_check)
	{
		determine = false;
	}
}

/*
 leetcode 1704: Determine if String Halves Are Alike 
 You are given a string s of even length. Split this string into two halves of equal lengths,
 and let a be the first half and b be the second half.
 Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U').
 Notice that s contains uppercase and lowercase letters.
 Return true if a and b are alike. Otherwise, return false.

output: false
*/
