#include "pch.h"
#include <iostream>

using namespace std;

double round(double x, unsigned n)
{
	return floor(x * pow(10, n) + 0.5) / pow(10, n);
}

int main()
{
	cout << round(127.8930, 2);
	return 0;
}


