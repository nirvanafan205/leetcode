#include <iostream> 
using namespace std;

int numberOfMatches(int n);

int main()
{
	int num = 7;

	numberOfMatches(num);
}

int numberOfMatches(int n)
{
	int matches = 0;

	if(n <= 1)
	{
		n = matches;
		return 1 + matches;
	}

	if(n % 2 == 0)
	{
		n = n / 2;		

		matches = matches + n;

		return matches + numberOfMatches(n);
	}	

	else
	{
		n = (n - 1 ) / 2;
		matches = matches + n;
		return matches + numberOfMatches(n);
	}

}
