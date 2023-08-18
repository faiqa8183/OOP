#include <iostream>
#include "complex.h"
using namespace std;
complex::complex()
{
	real = 0;
	imag = 0;
}
complex::complex(int real, int imag)
{
	this->real = real;
	this->imag = imag;
}
void complex:: operator++()
{
	real++;
	imag++;
}
void complex :: operator++(int)
{

	real++;
	imag++;
}
void complex:: operator--()
{
	real--;
	imag--; 
}
void complex:: operator--(int)
{
	real--;
	imag--;
}
void complex::operator+( const int temp)
{
	this->real = real + temp;
	this->imag = imag + temp;
}
void complex::operator-(const int temp)
{
	this->real = real - temp;
	this->imag = imag - temp;
}
complex complex::operator+(complex &a)
{
	complex temp;
	temp.real = this->real + a.real;
	temp.imag = this->imag + a.imag;
	return temp;

}

complex complex::operator-(complex &f)
{
	complex temp;
	temp.real = this->real - f.real;
	temp.imag = this->imag- f.imag;
	return temp;

}

ostream & operator << (ostream &out,  complex &obj1)
{
	out << obj1.real;
	out << "+" << obj1.imag << "i" << endl;
	return out;

}

istream & operator >> (istream &in, complex &obj2)
{
	cout << "Enter Real Part ";
	in >> obj2.real;
	cout << "Enter Imaginary Part ";
	in >> obj2.imag;
	return in;

}
