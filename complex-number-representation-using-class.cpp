#include <iostream>

//define class
class ComplexNumber {
public:
	ComplexNumber(); //initializes object to 0 + 0 * i
	ComplexNumber(double realPart); //initializes object to realPart + 0 * i
	ComplexNumber(double realPart, double imaginaryPart); //initializes object to realPart + imaginaryPart * i
	friend ComplexNumber operator + (const ComplexNumber& left, const ComplexNumber& right);
	friend ComplexNumber operator - (const ComplexNumber& left, const ComplexNumber& right);
	friend ComplexNumber operator * (const ComplexNumber& left, const ComplexNumber& right);
	friend bool operator == (const ComplexNumber& left, const ComplexNumber& right);
	friend std::istream& operator >> (std::istream& inStream, ComplexNumber& input);
	friend std::ostream& operator << (std::ostream& outStream, const ComplexNumber& output);
private:
	double real, imaginary;
};

//declare functions
void testEquations(const ComplexNumber& first, const ComplexNumber& second);
//precondition: first and second are initialized ComplexNumber objects
//postcondition: compares first and second with operators +, -, and *

//main
int main()
{
	using namespace std;
	ComplexNumber zero, equal1(5), equal2(5, 0), random(3, 4.275);
	cout << zero << endl << equal1 << endl << equal2 << endl << random << endl;
	if (equal1 == equal2)
		cout << equal1 << " == " << equal2 << endl;
	cout << "enter new values for zero\n";
	cin >> zero;
	//test equations
	testEquations(zero, random);
	return 0;
}

//define class functions
ComplexNumber::ComplexNumber() : real(0), imaginary(0) {}
ComplexNumber::ComplexNumber(double realPart) : real(realPart), imaginary(0) {}
ComplexNumber::ComplexNumber(double realPart, double imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

ComplexNumber operator + (const ComplexNumber& left, const ComplexNumber& right) { return ComplexNumber(left.real + right.real, left.imaginary + right.imaginary); }
ComplexNumber operator - (const ComplexNumber& left, const ComplexNumber& right) { return ComplexNumber(left.real - right.real, left.imaginary - right.imaginary); }
ComplexNumber operator * (const ComplexNumber& left, const ComplexNumber& right) { return ComplexNumber((left.real * right.real) - (left.imaginary * right.imaginary), (left.real * right.imaginary) + (left.imaginary * right.real)); }
bool operator == (const ComplexNumber& left, const ComplexNumber& right) { return (left.real == right.real && left.imaginary == right.imaginary); }
std::istream& operator >> (std::istream& inStream, ComplexNumber& input)
{
	inStream >> input.real >> input.imaginary;
	return inStream;
}
std::ostream& operator << (std::ostream& outStream, const ComplexNumber& output)
{
	outStream << output.real << " + " << output.imaginary << "i";
	return outStream;
}

//define functions
//uses <iostream>
void testEquations(const ComplexNumber& first, const ComplexNumber& second)
{
	using namespace std;
	cout << first << " + " << second << " = " << first + second << endl
		<< first << " - " << second << " = " << first - second << endl
		<< first << " * " << second << " = " << first * second << endl;
	return;
}
