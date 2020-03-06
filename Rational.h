#pragma once
#include <iostream>

class Rational
{
public:
	Rational(int = 0, int = 1);
	Rational addition(const Rational&);
	Rational subtraction(const Rational&);
	Rational multiplication(const Rational&);
	Rational division(const Rational&);
	void printRational();
	void printRationalFloat();
	Rational operator +(const Rational&);
	Rational operator -(const Rational&);
	Rational operator /(const Rational&);
	Rational operator *(const Rational&);
	bool operator == (const Rational& src);
	bool operator >(const Rational& src);
	bool operator<(const Rational& src);
	bool operator >=(const Rational& src);
	bool operator <=(const Rational& src);
private:
	int numerator;
	int denominator;
	void reduction();
	float b_multipiaction(const Rational& src );
};