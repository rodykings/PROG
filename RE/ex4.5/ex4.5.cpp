
#include "pch.h"
#include <iostream>
#include <algorithm>

using namespace std;


struct Fraction {
	int numerator;
	int denominator;
};

//read a fraction from the console
Fraction readFracc(Fraction f) {

	char bar;

	cout << "Write Fraction:";
	cin >> f.numerator >> bar >> f.denominator;

	if (bar == '/' && cin) {
		return f;
	}
	//change numerator and denominator to 0
	else {
		f.numerator = 0;
		f.denominator = 0;
		return f;
	}
}
Fraction reduceFracc(Fraction f) {
	int num = 2;
	for (int i = min(f.numerator, f.denominator); i >= 2; i--) {
		if (f.numerator % i == 0 && f.denominator % i == 0)
		{
			f.numerator /= i;
			f.denominator /= i;
			break;
		}
	}
	return f;
}

//invert the fraction (denominator is now the numerator and numerator is now the denominator)
Fraction invert(Fraction f1)
{
	Fraction final;
	final.numerator = f1.denominator;
	final.denominator = f1.numerator;
	return final;
}

//change the sinal of the fraction
Fraction neg(Fraction f1) {
	Fraction final;
	final.numerator = -f1.numerator;
	final.denominator = f1.denominator;
	return final;
}

Fraction sum(Fraction f1, Fraction f2) {
	Fraction final;
	final.numerator = (f1.numerator*f2.denominator) + (f2.numerator * f1.denominator);
	final.denominator = (f1.denominator * f2.denominator);
	return reduceFracc(final);
}
Fraction subtract(Fraction f1, Fraction f2) 
{
	return sum(f1, neg(f2));
}
Fraction product(Fraction f1, Fraction f2) {
	Fraction final;
	final.numerator = f1.numerator * f2.numerator;
	final.denominator = f1.denominator * f2.denominator;
	return reduceFracc(final);
}

Fraction division(Fraction f1, Fraction f2) {
	return product(f1, invert(f2));
}

void writeFracc(Fraction f)
{
	if (f.denominator == 1)
		cout << f.numerator;
	else
		cout << f.numerator << '/' << f.denominator;
}
int main()
{
	Fraction nova;
	nova.denominator = 0;
	nova.numerator = 0;
	writeFracc(reduceFracc(readFracc(nova)));
}

