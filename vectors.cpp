#include <iostream>
#include <vector>

using namespace std; 

int main()
{
	//initialized vector
	vector<int> nums { 10, 20, 30 };

	//for each loop
	for(int x : nums) //for int x in nums
	{
		cout << x << " "; //prints out things
	}
}
