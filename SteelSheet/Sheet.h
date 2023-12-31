#pragma once
class Sheet
{
protected:
	double thickness;
	double weight;
public:
	Sheet();
	Sheet(double  thickness, double weight);
	~Sheet();
	virtual double areaŅalculator() const = 0;
	virtual double weightCalculator() const = 0;
	virtual void display() const;
};

