#ifndef BASICPLUS_H
#define BASICPLUS_H

#include "Calculator.h"
#include <string>
using namespace std;
class BasicCalc : public Calculator 
{
public:
	BasicCalc(String^);
	~BasicCalc();
	virtual double Equals() override;
	double Equals(string);
	string getExpression();
	void setExpression(string);
private:
	string expr;
};


#endif // !