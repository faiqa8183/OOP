#include <iostream>
using namespace std;
class complex
{
	int real;
	int imag;
public:
	complex();
	complex(int real, int imag);
	void operator++();
	void operator++(int);
	void operator--();
	void operator--(int);
	void operator+(int temp);
	void operator-(int temp);
	complex operator+(complex &a);
	complex operator-(complex &a);
	friend ostream & operator << (ostream &out,  complex &c);
	friend istream & operator >> (istream &in, complex &c);



};