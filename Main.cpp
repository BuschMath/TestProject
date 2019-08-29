#include <iostream>

using namespace std;

const float pi = float(3.14159265358979323846264338);

// function prototype
void Output(string, string, string, string, const string);

int Add(int, int);

int main()
{
	// variable declaration
	string name = "Jane Doe";
	string phoneNumber = "5555551234";
	string email = "doe@gmail.com";
	string ccNumber = "12345678910";
	const string birthday = "23091973";		// code is day month year

	// function call
	Output(name, phoneNumber, email, ccNumber, birthday);

	cout << Add(3, 4);

	return 0;
}

// function defintion
void Output(string N, string P, string E, string C, const string B)
{
	cout << N << "\t" << P << endl << E << "\t" << C << endl << B << endl;
}

int Add(int input1, int input2)
{
	return input1 + input2;
}