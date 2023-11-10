#pragma once
#include "Sheet.h"
class Triangle :
    public Sheet
{
    double cat1;
    double cat2;
public:
    Triangle();
    Triangle(double thickness, double weight, double cat1, double cat2);
    ~Triangle();
    double area—alculator() const override;
    double weightCalculator() const override;
    void display() const override;
};

