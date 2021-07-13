#include <iostream>
#include <string>
#include <vector>

//Write a function that reverses a string. The input string is given as an array of characters s.

using namespace std;

int main()
{
	string word = "hello";
	int size = word.size() - 1;

	for(int i = 0; i < word.size() / 2; i++)
	{
		char letter = word[size - i];
		char temp = word[i];
		word[i] = letter;
		word[size - i] = temp;
	}

	for(int b = 0; b < word.size(); b++)
	{
		cout << word[b] << endl;
	}

}

//leetcode: 344. Reverse String
//output: o, l, l, e, h
