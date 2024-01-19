#include "ScientificCalc.h" // class definition
#include <string>
#include <cmath>
#include <algorithm>
#include <array>
using namespace std;


ScientificCalc::ScientificCalc(String^ str) : Calculator() {
	this->expr = msclr::interop::marshal_as<std::string>(str);
}

ScientificCalc::~ScientificCalc() {

}
string ScientificCalc::getExpression() {
	return this->expr;
}

double ScientificCalc::Equals() {
	for (int index = 0; index < this->expr.length(); index++) {
		if (this->expr.substr(index, 1) == "^") {
			return this->exponent(this->expr.substr(0, index), this->expr.substr(index + 1, this->expr.length() - index - 1));
		}
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
		if (this->expr.substr(index, 1) == "-" && index > 0) {
			return this->Minus(this->expr.substr(0, index), this->expr.substr(index + 1, this->expr.length() - index - 1));
		}
		if (this->expr.substr(index, 1) == "|") {
			return this->absValue(this->expr.substr(0, index));
		}
		if (this->expr.substr(index, 1) == "s") {
			return this->sine(this->expr.substr(0, index));
		}
		if (this->expr.substr(index, 1) == "c") {
			return this->cosine(this->expr.substr(0, index));
		}
		if (this->expr.substr(index, 1) == "t") {
			return this->tangent(this->expr.substr(0, index));
		}
		if (this->expr.substr(index, 1) == "S") {
			return this->sinMinus(this->expr.substr(0, index));
		}
		if (this->expr.substr(index, 1) == "C") {
			return this->cosMinus(this->expr.substr(0, index));
		}
		if (this->expr.substr(index, 1) == "T") {
			return this->tanMinus(this->expr.substr(0, index));
		}
		if (this->expr.substr(index, 1) == "L") {
			return this->logarithm(this->expr.substr(0, index));
		}
		if (this->expr.substr(index, 1) == "!") {
			return this->factorial(this->expr.substr(0, index));
		}
	}
	return stod(this->expr);
}
double ScientificCalc::Equals(string str) {
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
		if (str.substr(index, 1) == "|") {
			return this->absValue(str.substr(0, index));
		}
		if (str.substr(index, 1) == "s") {
			return this->sine(str.substr(0, index));
		}
		if (str.substr(index, 1) == "c") {
			return this->cosine(str.substr(0, index));
		}
		if (str.substr(index, 1) == "t") {
			return this->tangent(str.substr(0, index));
		}
		if (str.substr(index, 1) == "S") {
			return this->sinMinus(str.substr(0, index));
		}
		if (str.substr(index, 1) == "C") {
			return this->cosMinus(str.substr(0, index));
		}
		if (str.substr(index, 1) == "T") {
			return this->tanMinus(str.substr(0, index));
		}
		if (str.substr(index, 1) == "L") {
			return this->logarithm(this->expr.substr(0, index));
		}
		if (str.substr(index, 1) == "!") {
			return this->factorial(this->expr.substr(0, index));
		}
	}
	return stod(str);
}
void ScientificCalc::setExpression(string str) {
	this->expr = str;
}
void ScientificCalc::setExpression(String^ str) {
	this->expr = msclr::interop::marshal_as<std::string>(str);
}

double ScientificCalc::absValue(string str1) {
	double value = abs(stod(str1));
	return value;
}

double ScientificCalc::sine(string str1) {
	double value = sin(stod(str1));
	return value;
}
double ScientificCalc::cosine(string str1) {
	return cos(stod(str1));
}
double ScientificCalc::tangent(string str1) {
	return tan(stod(str1));
}
double ScientificCalc::logarithm(string str1) {
	return log10(stod(str1));
}
double ScientificCalc::sinMinus(string str1) {
	return asin(stod(str1));
}
double ScientificCalc::cosMinus(string str1) {
	return acos(stod(str1));
}
double ScientificCalc::tanMinus(string str1) {
	return atan(stod(str1));
}
double ScientificCalc::factorial(string str1) {
	int value = stoi(str1);
	int calculated = 1;
	for (int i = 1; i <= value; i++) {
		calculated = i * calculated;
	}
	return calculated;
}
double ScientificCalc::exponent(string str1, string str2) {
	return pow(stod(str1), stod(str2));
}