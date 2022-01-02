#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> sentences = { "alice and bob love leetcode", "i think so too", "this is great thanks very much" };

	int count = 1;

	for(int i = 0; i < sentences.size(); i++)
	{
		int max = 0;

		for(int j = 0; j < sentences[i].size(); j++)
		{
			if(sentences[i][j] == ' ')
			{
				max++;
			}
		}

		if(max > (count - 1) )
		{
			count = max + 1;

		}
	}
	
	cout << count;
}

/*
	A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
You are given an array of strings sentences, where each sentences[i] represents a single sentence.
Return the maximum number of words that appear in a single sentence. 
*/
