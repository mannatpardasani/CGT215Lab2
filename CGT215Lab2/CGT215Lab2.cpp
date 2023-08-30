#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	cout << "Hi, my name is Mannat and I'm going to solve the equation: AX + B = 0 for X. Please enter a value for A ";
	cin >> A;

	cout << "Please enter a value for B:";
	cin >> B;

	cout << "A=" << A << endl;
	cout << "And B=" << B << endl;

	X = (-B)/A;

	cout << "The answer is..." << endl;
	cout << "X=" << X << endl;
}