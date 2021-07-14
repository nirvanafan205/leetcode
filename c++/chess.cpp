#include <iostream>
#include <string>

using namespace std;

int main()
{
	string area = "a1";
	char letter = area[0];
	char num = area[1];
	bool check = true;

	int let = letter;
	int other = num;

	if(let % 2 == 1 && other % 2 == 1)
	{
		check = false;	
	}

	else if(let % 2 == 1 && other % 2 == 0)
	{
		check == true;
	}

	else if(let % 2 == 0 && other % 2 == 1)
	{
		check = true;
	}

	else if(let % 2 == 0 && other % 2 == 0)
	{
		check = false;
	}

	cout << check << endl;
}

//leetcode: 1812. Determine Color of a Chessboard Square
//output false
