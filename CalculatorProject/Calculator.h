#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace std;
class Calculator
{
public:
	Calculator();
	~Calculator();
	virtual double Equals();
	double Plus(string, string)const;
	double Minus(string, string) const;
	double Divide(string, string) const;
	double Multiply(string, string) const;
	double Square(string) const;
	double SquareRoot(string) const;
private:
	
};

#endif // !
