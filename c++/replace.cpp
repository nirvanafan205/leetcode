#include <iostream>

using namespace std;

int main()
{
	string s = "a1b2c3d4e";
	
	for(int i = 0; i < s.size(); i++)
	{
		int num = s[i];
		int check;

		if(num >= 48 && num <= 57)
		{
			check = num - 48;
			s[i] = s[i - 1] + check;
		}
	}

	for(int b = 0; b < s.size(); b++)
	{
		cout << s[b] << endl;
	}
}

/* leetcode: 1844. Replace All Digits with Characters
* You are given a 0-indexed string s that has lowercase English letters in its even indices and digits in its odd indices.
* For every odd index i, you want to replace the digit s[i] with shift(s[i-1], s[i]).
* Return s after replacing all digits. It is guaranteed that shift(s[i-1], s[i]) will never exceed 'z'.
*
* output: abbdcfdhe
*/
