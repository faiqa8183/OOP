#include <iostream>
#include "complex.h"
using namespace std;
int main()
{
	complex c1;
	complex c2;
	//istream operator
	cin >> c1;
	cin >> c2;
	//post increment
	c1++;
	//ostream operator
	cout << c1;
	//pre increment
	++c1;
	//increment by a fixed number
	c1 + 9;
	//ostream overloaded operator
	cout << c1;
	//overloaded + operator
	complex c3 = c1 + c2;
	//ostream overloaded
	cout<< c3;
	//overloaded - operator
	complex c4 = c1 - c2;
	//ostream operator

	cout << c3;
	system("pause");
	return 0;
}