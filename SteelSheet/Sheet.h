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
	virtual double area—alculator() const = 0;
	virtual double weightCalculator() const = 0;
	virtual void display() const;
};

