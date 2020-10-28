/*
 	You are given two strings s and t.
	String t is generated by random shuffling string s and then add one more letter at a random position.
	Return the letter that was added to t.
*/

#include <iostream>

using namespace std;

class Solution
{
	public:
		char findTheDifference(string s, string t)
		{
			char t_value[t.length()];
			char s_value[s.length()];

			int t_sum = 0;
			int s_sum = 0;

			for(int i = 0; i < sizeof(t_value); i++)
			{
				t_value[i] = t[i];
			}

			for(int b = 0; b < sizeof(s_value); b++)
			{
				s_value[b] = s[b];
			}

			for(int a = 0; a < sizeof(t_value); a++)
			{
				t_sum += t_value[a];
			}

			for(int s = 0; s < sizeof(s_value); s++)
			{
				s_sum += s_value[s];
			}

			int found = t_sum - s_sum;

			char found_  = found;

			return found_;
		}
};

int main()
{
	string s = "";
	string t = "y";

	Solution caller;

	caller.findTheDifference(s, t);
}
