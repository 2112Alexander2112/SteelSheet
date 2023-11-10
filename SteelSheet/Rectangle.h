#pragma once
#include "Sheet.h"
class Rectangle :
    public Sheet
{
    int A;
    int B;
public:
    Rectangle();
    Rectangle(double thickness, double weight, double A, double B);
    ~Rectangle();
    double area—alculator() const override;
    double weightCalculator() const override;
    void display() const override;
};

