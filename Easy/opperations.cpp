#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> operations = {"--X","X++","X++"};
	int x = 0;

	for(int i = 0; i < operations.size(); i++)
	{
		for(int j = 0; j < operations[i].size(); j++)
		{
			if(operations[i][j] == '-')
			{
				x -= 1;
				j += 3;
			}

			else if(operations[i][j] == '+')
			{
				x += 1;
				j += 3;
			}
		}
	}

	cout << x << endl;
}

/*
	There is a programming language with only four operations and one variable X:

    ++X and X++ increments the value of the variable X by 1.
    --X and X-- decrements the value of the variable X by 1.

Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

*/
