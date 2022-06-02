#include <iostream>

using namespace std;

int sum(int num1, int num2)
{
	num1 += num2;
	return num1;
}

int main()
{
	int num1 = 2;
	int num2 = -2;

	sum(num1,num2);
}

/*
	Given two integers num1 and num2, return the sum of the two integers.  
*/
