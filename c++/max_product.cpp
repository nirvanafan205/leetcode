#include <iostream>
using namespace std;

int main()
{
	int nums[] = { 5, 6, 2, 7, 4};
	int size = sizeof(nums) / sizeof(nums[0]);

	for(int i = 0; i < size; ++i)
	{
		for(int j = 0; j < size - i; ++j)
		{
			if(nums[j] > nums[j + 1])
			{
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	for(int b = 0; b < size; b++)
	{
		cout << nums[b] << endl;
	}

}
