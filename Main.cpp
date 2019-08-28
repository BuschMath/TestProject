#include <iostream>

using namespace std;

const float pi = float(3.14159265358979323846264338);

// function prototype
void Output(int value);

int main()
{
	// variable declaration
	int number = 5;

	// function call
	Output(number);

	return 0;
}

// function defintion
void Output(int value)
{
	cout << "Hello " << value << " " << pi;
	cout << endl;
}