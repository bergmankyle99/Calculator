#include "Calculator.h" // class definition
using namespace std;

Calculator::Calculator() {

}
Calculator::~Calculator() {

}
double Calculator::Equals() {
	return 1.5;
}
double Calculator::Plus(string str1, string str2) const {
	double addi = stod(str1) + stod(str2);
	return addi;
}

double Calculator::Minus(string str1, string str2) const {
	return stod(str1) - stod(str2);
}

double Calculator::Divide(string str1, string str2) const {
	return stod(str1) / stod(str2);
}

double Calculator::Multiply(string str1, string str2) const {
	return stod(str1) * stod(str2);
}
double Calculator::Square(string str1) const {
	double value = stod(str1);
	return pow(value , 2);
}
double Calculator::SquareRoot(string str1) const {
	return sqrt(stod(str1));
}
