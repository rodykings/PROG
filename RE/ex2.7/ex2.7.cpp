#include "pch.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;
const double PI = 3.141592653589793;

double degToRad(int degrees) {
	return (degrees * PI) / 180;
}

int main()
{
	string space = "\t";
	cout << "ang   " << space <<  "   sen   " << space << "   cos   " << space << "   tan   " << endl;

	int step = 15;
	
	for (double i = 0; i <= 90; i += step) {
		
		cout << i << right << fixed << setprecision(6) << space << sin(degToRad(i)) << space << cos(degToRad(i)) << space;
		
		if (i != 90)
			cout << tan(degToRad(i)) << endl;
		else 	
			cout << "infinito" << endl;

		cout << fixed << setprecision(0);
	}

	return 0;
}
