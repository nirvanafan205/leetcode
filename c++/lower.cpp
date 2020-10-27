#include <iostream>
#include <string>
#include <cstring>

// Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

using namespace std;

class Solution
{
	public:
		string toLowerCase(string str)
		{
			char c[str.size() + 1];

			strcpy(c, str.c_str() );

			for(int i = 0; i < str.size() + 1; i++)
			{
				if(c[i] >= 65 && c[i] <= 90)
				{
					c[i] = c[i] + 32;
				}

				str[i] = c[i];
			}

			return str;
		}
};

int main()
{
	string str = "HELLO";

	Solution caller;

	caller.toLowerCase(str);
}
