#ifndef SCIENTIFICCALC_H
#define SCIENTIFICCALC_H

#include "Calculator.h"
#include <string>
#include <math.h>
using namespace std;
class ScientificCalc : public Calculator
{
public:
	ScientificCalc(String^);
	~ScientificCalc();
	virtual double Equals() override;
	double Equals(string);
	string getExpression();
	void setExpression(string);
	void setExpression(String^);
private:
	double absValue(string);
	double sine(string);
	double cosine(string);
	double tangent(string);
	double logarithm(string);
	double sinMinus(string);
	double cosMinus(string);
	double tanMinus(string);
	double factorial(string);
	double exponent(string, string);
	string expr;
};


#endif // !