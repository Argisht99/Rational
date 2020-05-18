#include "Rational.h"

Rational::Rational(int n, int d)
{
	numerator = n;
	denominator = d;
}

Rational Rational::addition(const Rational& src)
{
	Rational temp;
	temp.numerator = src.numerator * denominator;
	temp.numerator = temp.numerator + src.denominator * numerator;
	temp.denominator = src.denominator * denominator;
	temp.reduction();
	return temp;
}

Rational Rational::subtraction(const Rational& src)
{
	Rational temp;
	temp.numerator = numerator * src.denominator;
	temp.numerator = temp.numerator - denominator * src.numerator;
	temp.denominator = denominator * src.denominator;
	temp.reduction();
	return temp;
}

Rational Rational::multiplication(const Rational& src)
{
	Rational temp;
	temp.numerator = numerator * src.denominator;
	temp.denominator = denominator * src.numerator;
	temp.reduction();
	return temp;
}

Rational Rational::division(const Rational& src)
{
	Rational temp;
	temp.numerator = numerator * src.numerator;
	temp.denominator = denominator * src.denominator;
	temp.reduction();
	return temp;
}

void Rational::reduction()
{
	int biggest;
	int s_div=0;

	if (numerator < denominator)
	{	
		biggest = denominator;
	}
	else
	{
		biggest = numerator;
	}

	for (int i = 2; i <= biggest; ++i)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			s_div = i;
		}
	}
		if (s_div != 0)
		{
			numerator = numerator / s_div;
			denominator = denominator / s_div;
		}	

}

float Rational::b_multipiaction(const Rational& src)
{
	float a = static_cast<float> (src.numerator);
	float b = static_cast<float> (src.denominator);
	float c=a/b;
	return c;
}

void Rational::printRational()
{
	if (denominator == 0)
	{
		std::cout << "Denominator can't be 0 \n";
	}
	else
	{
		std::cout << numerator << "/" << denominator;
	}
}

void Rational::printRationalFloat()
{
	float a= static_cast<float> (numerator);
	float b = static_cast<float> (denominator);
	float c;
	if (denominator == 0)
	{
		std::cout << "Denominator can't be 0 \n";
	}
	else
	{
		c = a/b;
	}
	std::cout << c;
}

Rational Rational::operator+(const Rational& src)
{
	Rational temp;
	temp.numerator = src.numerator * denominator;
	temp.numerator = temp.numerator + src.denominator * numerator;
	temp.denominator = src.denominator * denominator;
	temp.reduction();
	return temp;
}

Rational Rational::operator-(const Rational& src)
{
	return subtraction(src);
}

Rational Rational::operator/(const Rational& src)
{
	return multiplication(src);
}

Rational Rational::operator*(const Rational& src)
{
	return division(src);
}

bool Rational::operator==(const Rational& src)
{
	float r = b_multipiaction(src);
	float aa = static_cast<float> (numerator);
	float bb = static_cast<float> (denominator);
	float cc = aa / bb;
	if (cc == r)
	{
		return true;
	}
	return false;
}

bool Rational::operator>(const Rational& src)
{
	float r = b_multipiaction(src);
	float aa = static_cast<float> (numerator);
	float bb = static_cast<float> (denominator);
	float cc = aa / bb;
	if (cc > r)
	{
		return true;
	}
	return false;
}

bool Rational::operator<(const Rational& src)
{
	float r = b_multipiaction(src);
	float aa = static_cast<float> (numerator);
	float bb = static_cast<float> (denominator);
	float cc = aa / bb;
	if (r > cc)
	{
		return true;
	}
	return false;
}

bool Rational::operator>=(const Rational& src)
{
	float r = b_multipiaction(src);
	float aa = static_cast<float> (numerator);
	float bb = static_cast<float> (denominator);
	float cc = aa / bb;
	if (cc>=r)
	{
		return true;
	}
	return false;
}

bool Rational::operator<=(const Rational& src)
{
	float r = b_multipiaction(src);
	float aa = static_cast<float> (numerator);
	float bb = static_cast<float> (denominator);
	float cc = aa / bb;
	if (r >= cc)
	{
		return true;
	}
	return false;
}
