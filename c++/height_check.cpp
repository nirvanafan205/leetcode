#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> heights { 1, 1, 4, 2, 1, 3 };

	vector<int> check = heights;

	sort(check.begin(), check.end() );

	int count = 0;

	for(int i = 0; i < check.size(); i++)
	{
		if(check[i] != heights[i])
		{
			count++;
		}
	}

	cout << count << endl;
}
