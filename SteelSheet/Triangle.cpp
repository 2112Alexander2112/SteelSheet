#include "Header.h"
#include "Triangle.h"

Triangle::Triangle() :  Sheet(0.0, 0.0), cat1(0.0), cat2(0.0)
{
}

Triangle::Triangle(double thickness, double weight, double cat1, double cat2) : Sheet(thickness, weight), cat1(cat1), cat2(cat2)
{
}

Triangle::~Triangle()
{
}

double Triangle::area—alculator() const
{
	return 0.5 * cat1 * cat2;
}

double Triangle::weightCalculator() const
{
	return area—alculator() * thickness * weight;
}

void Triangle::display() const
{
	Sheet::display();
	std::cout << "> First cutted:  " << cat1 << std::endl;
	std::cout << "> Second cutted: " << cat2 << std::endl;

	std::cout << "\n> Area: " << area—alculator() << std::endl;
	std::cout << "> Weight: " << weightCalculator() << std::endl;
}
