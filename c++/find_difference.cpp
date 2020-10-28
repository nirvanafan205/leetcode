#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s = "";
	string t = "y";

	char c[t.size() + 1];

	strcpy(c, t.c_str() );

	int end = t.size() - 1;

	cout << c[end];

}
