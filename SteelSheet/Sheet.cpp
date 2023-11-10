#include "Header.h"
#include "Sheet.h"

Sheet::Sheet() : thickness(0), weight(0)
{
}

Sheet::Sheet(double thickness, double weight) : thickness(thickness), weight(weight)
{
}

Sheet::~Sheet()
{
}

void Sheet::display() const
{
	std::cout << "\n> Thickness in mm: " << thickness << std::endl;
	std::cout << "> Weight in kg\m^3: " << weight << std::endl;
}
