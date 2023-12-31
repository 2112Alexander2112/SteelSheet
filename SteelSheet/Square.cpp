#include "Header.h"
#include "Square.h"

Square::Square() : Sheet(0.0, 0.0), A(0.0)
{
}

Square::Square(double thickness, double weight, double A) : Sheet(thickness, weight), A(A)
{
}


Square::~Square()
{
}

double Square::areaŅalculator() const
{
    return A * A;
}

double Square::weightCalculator() const
{
    return areaŅalculator() * thickness * weight;
}

void Square::display() const
{
    Sheet::display();
    std::cout << "> Side of a square: " << A << std::endl;

    std::cout << "\n> Area: " << areaŅalculator() << std::endl;
    std::cout << "> Weight: " << weightCalculator() << std::endl;
}
