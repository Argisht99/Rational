#include "Rational.h"


int main()
{

	Rational a(100, 200), b(100, 1), c;
	a.printRational();
	std::cout << " + ";
	b.printRational();
	std::cout << " = ";
	c = a + b;
	c.printRational();
	std::cout << std::endl;
	a.printRational();
	std::cout << " + ";
	b.printRational();
	std::cout << " = ";
	c.printRational();
	std::cout << " = ";
	c.printRationalFloat();
	// +
	std::cout << std::endl << std::endl;

	a.printRational();
	std::cout << " - ";
	b.printRational();
	std::cout << " = ";
	c = a - b;
	c.printRational();
	std::cout << std::endl;
	a.printRational();
	std::cout << " - ";
	b.printRational();
	std::cout << " = ";
	c.printRational();
	std::cout << " = ";
	c.printRationalFloat();
	// -

	std::cout << std::endl << std::endl;

	a.printRational();
	std::cout << " * ";
	b.printRational();
	std::cout << " = ";
	c = a * b;
	c.printRational();
	std::cout << std::endl;
	a.printRational();
	std::cout << " * ";
	b.printRational();
	std::cout << " = ";
	c.printRational();
	std::cout << " = ";
	c.printRationalFloat();
	//   *

	std::cout << std::endl << std::endl;

	a.printRational();
	std::cout << " / ";
	b.printRational();
	std::cout << " = ";
	c = a / b;
	c.printRational();
	std::cout << std::endl;
	a.printRational();
	std::cout << " / ";
	b.printRational();
	std::cout << " = ";
	c.printRational();
	std::cout << " = ";
	c.printRationalFloat();
	//   /
	std::cout << std::endl << std::endl;

	bool aa;
	aa = a > b;
	std::cout << "a > b:" << aa <<std::endl;
	aa = a < b;
	std::cout <<"a < b:"<< aa << std::endl;
	aa = a >= b;
	std::cout << "a >= b:" << aa << std::endl;
	aa = a <= b;
	std::cout << "a <= b:" << aa << std::endl;
	aa = a == b;
	std::cout << "a == b:" << aa << std::endl;

	system("pause");
}