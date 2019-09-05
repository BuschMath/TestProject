#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double pi = 3.14159265358979323846264338;

double volumeOfCy(double radius, double height);
double cir(double radius);

int main()
{
	double radius = 15;
	double height = 0.5;

	cout << "The volume is:" << setw(13) << volumeOfCy(radius, height) + 1000000 << endl;
	cout << cir(radius) << endl;
	cout << fixed << setprecision(6) << float(100) << endl;

	return 0;
}

double volumeOfCy(double radius, double height)
{
	return pi * pow(radius, 2) * height;
}

double cir(double radius)
{
	return 2 * pi * radius;
}