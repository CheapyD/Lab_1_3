#pragma once
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class FuzzyNumber
{
private:
	double x;
	double l;
	double r;

public:
	double GetX() const { return x; }
	double GetL() const { return l; }
	double GetR() const { return r; }

	void SetX(double value) { x = value; }
	void SetL(double value) { l = value; }
	void SetR(double value) { r = value; }

	bool Init(double x, double l, double r);
	void Display(string P);
	void Read();
    string toString();

	static FuzzyNumber Add(FuzzyNumber a, FuzzyNumber b);
	static FuzzyNumber Multi(FuzzyNumber a, FuzzyNumber b);
};


