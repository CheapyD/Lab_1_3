#include "FuzzyNumber.h"

using namespace std;

bool FuzzyNumber::Init(double x, double l, double r)
{ 
	if (x > (x - l) && (r + x) > x)
	{
		SetX(x);
		SetL(l);
		SetR(r);
		return true;
	}
	else
		return false;
}

void FuzzyNumber::Read()
{
	double X, L, R;
	do
	{
		cout << "x = "; cin >> X;
		cout << "l = "; cin >> L;
		cout << "r = "; cin >> R;
	} while (!Init(X, L, R));
	cout << endl;
}

void FuzzyNumber::Display(string P) 
{
	cout << "x = " << x << endl;
	cout << "l = " << l << endl;
	cout << "r = " << r << endl;
	cout << P << " = " << "(" << x - l << ";" << x << ";" << x + r << ")" << endl << endl;
}

string FuzzyNumber::toString() 
{
	stringstream sout;
	sout << "x = " << x << endl;
	sout << "l = " << l << endl;
	sout << "r = " << r << endl << endl;
	return sout.str();
}

FuzzyNumber FuzzyNumber::Add(FuzzyNumber a, FuzzyNumber b)
{
	FuzzyNumber T;
	T.x = a.x + b.x;
	T.l = a.x + b.x - a.l - b.l;
	T.r = a.x + b.x + a.r + b.r;
	return T;
}

FuzzyNumber FuzzyNumber::Multi(FuzzyNumber a, FuzzyNumber b)
{
	FuzzyNumber N;
	N.x = a.x * b.x;
	N.l = (a.x * b.x) - (b.x * a.l) - (a.x * b.l) - (a.l * b.l);
	N.r = (a.x * b.x) + (b.x * a.r) + (a.x * b.r) + (a.r * b.r);
	return N;
}
