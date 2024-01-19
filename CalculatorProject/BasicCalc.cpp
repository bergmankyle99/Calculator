#include "BasicCalc.h" // class definition
#include <string>
#include <cmath>
using namespace std;


BasicCalc::BasicCalc(String^ str):Calculator() {
	this->expr = msclr::interop::marshal_as<std::string>(str);
}

BasicCalc::~BasicCalc() {

}
double BasicCalc::Equals() {
	for (int index = 0; index < this->expr.length(); index++) {
		if (this->expr.substr(index, 1) == "½") {
			return this->SquareRoot(this->expr.substr(0, index));
		}
		if (this->expr.substr(index, 1) == "²") {
			return this->Square(this->expr.substr(0, index));
		}
		if (this->expr.substr(index, 1) == "x" || this->expr.substr(index, 1) == "X" || this->expr.substr(index, 1) == "*") {
			return this->Multiply(this->expr.substr(0, index), this->expr.substr(index + 1, this->expr.length() - index - 1));
		}
		if (this->expr.substr(index, 1) == "/" || this->expr.substr(index, 1) == "÷") {
			return this->Divide(this->expr.substr(0, index), this->expr.substr(index + 1, this->expr.length() - index - 1));
		}
		if (this->expr.substr(index, 1) == "+") {
			return this->Plus(this->expr.substr(0, index), this->expr.substr(index + 1, this->expr.length() - index - 1));
		}
		if (this->expr.substr(index, 1) == "-") {
			return this->Minus(this->expr.substr(0, index), this->expr.substr(index + 1, this->expr.length() - index - 1));
		}
	}
	return stod(this->expr);
}
double BasicCalc::Equals(string str) {
	for (int index = 0; index < str.length(); index++) {
		if (str.substr(index, 1) == "+") {
			return this->Plus(str.substr(0, index), str.substr(index + 1, str.length() - index - 1));
		}
		if (str.substr(index, 1) == "-") {
			return this->Minus(str.substr(0, index), str.substr(index + 1, str.length() - index - 1));
		}
		if (str.substr(index, 1) == "/" || str.substr(index, 1) == "÷") {
			return this->Divide(str.substr(0, index), str.substr(index + 1, str.length() - index - 1));
		}
		if (str.substr(index, 1) == "²") {
			return this->Square(str.substr(index - 1, 1));
		}
		if (str.substr(index, 1) == "x" || str.substr(index, 1) == "X" || str.substr(index, 1) == "*") {
			return this->Multiply(str.substr(0, index), str.substr(index + 1, str.length() - index - 1));
		}
		if (str.substr(index, 1) == "½") {
			return this->SquareRoot(str.substr(0, index));
		}
	}
	return stod(str);
}
string BasicCalc::getExpression() {
	return this->expr;
}
void BasicCalc::setExpression(string str) {
	this->expr = str;
}