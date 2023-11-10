#pragma once
#include "Sheet.h"
class Square :
    public Sheet
{
    double A;
public:
    Square();
    Square(double thickness, double weight, double A);
    ~Square();
    double area—alculator() const override;
    double weightCalculator() const override;
    void display() const override;
};

