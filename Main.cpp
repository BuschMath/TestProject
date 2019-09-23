#include <iostream>

using namespace std;

int main()
{
	string letters = "ABCDE";

	cout << letters;

	cout << "\n\n\nThe following is a calculated result: ";

	float x = 3.1415;
	double y = 1.2345;
	char z = 'T';

	cout << char((2 * x - pow(y, 3)) / 4 * z);

	return 0;
}