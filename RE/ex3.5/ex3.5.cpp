#include "pch.h"
#include <iostream>
#include <algorithm>

using namespace std;

void reduceFracc(int &numerator, int &denominator);

void sum(int numerator1, int denominator1, int numerator2, int denominator2, int &numerator, int &denominator) {
	numerator = (numerator1*denominator2) + (numerator2 * denominator1);
	denominator = (denominator1 * denominator2);
	reduceFracc(numerator, denominator);
}
void subtract(int numerator1, int denominator1, int numerator2, int denominator2, int &numerator, int &denominator) {
	sum(numerator1, denominator1, -numerator2, denominator2, numerator, denominator);
}
void product(int numerator1, int denominator1, int numerator2, int denominator2, int &numerator, int &denominator) {
	numerator = numerator1 * numerator2;
	denominator = denominator1 * denominator2;
	reduceFracc(numerator, denominator);
}
void division(int numerator1, int denominator1, int numerator2, int denominator2, int &numerator, int &denominator) {
	product(numerator1, denominator1, denominator2, numerator2, numerator, denominator);
}

bool readFracc(int &numerator, int &denominator) {

	char bar;

	cout << "Write Fraction:";
	cin >> numerator >> bar >> denominator;

	if (bar == '/' && cin) {
		return true;
	}
	//change numerator and denominator to 0
	else {
		numerator = 0;
		denominator = 0;
		return false;
	}
}
void writeFracc(int &numerator, int &denominator)
{
	if (denominator == 1)
		cout << numerator;
	else
		cout << numerator << '/' << denominator;
}
void reduceFracc(int &numerator, int &denominator) {
	int num = 2;
	for (int i = min(numerator, denominator); i >= 2; i--) {
		if (numerator % i == 0 && denominator % i == 0)
		{
			numerator /= i;
			denominator /= i;
			break;
		}
	}
}



int main()
{
	int numerator, denominator;

	subtract(3, 6, 4, 2, numerator, denominator);
	writeFracc(numerator, denominator);
	
}
