#include "FuzzyNumber.h"
#include <iostream>

using namespace std;

int main()
{
	FuzzyNumber A;
	A.Read();
	A.Display("A");
	
	FuzzyNumber B;
	B.Read();
	B.Display("B");

	FuzzyNumber S;
	S = FuzzyNumber::Add(A, B);
	cout << "A + B = " << "(" << S.GetL() << ";" << S.GetX() << ";" << S.GetR() << ")" << endl << endl;
	cout << S.toString();

	FuzzyNumber M;
	M = FuzzyNumber::Multi(A, B);
	cout << "A * B = " << "(" << M.GetL() << ";" << M.GetX() << ";" << M.GetR() << ")" << endl << endl;
	cout << M.toString();
}