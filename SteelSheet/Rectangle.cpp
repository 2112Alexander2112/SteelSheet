#include "Header.h"
#include "Rectangle.h"

Rectangle::Rectangle() : Sheet(0.0, 0.0), A(0.0), B(0.0)
{
}

Rectangle::Rectangle(double thickness, double weight, double A, double B) : Sheet(thickness, weight), A(A), B(B)
{
}

Rectangle::~Rectangle()
{
}

double Rectangle::areaŅalculator() const
{
    return A * B;
}

double Rectangle::weightCalculator() const
{
    return areaŅalculator() * thickness * weight;
}

void Rectangle::display() const
{
    Sheet::display();
    std::cout << "> Rectangle length: " << A << std::endl;
    std::cout << "> Rectangle width: " << B << std::endl;

    std::cout << "\n> Area: " << areaŅalculator() << std::endl;
    std::cout << "> Weight: " << weightCalculator() << std::endl;
}
