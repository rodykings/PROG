#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int num = 1;
	int sum = 0;
	int average;
	int counter = 0;
	int max = 0;
	int min = 0;

	while (num != 0)
	{
		cin >> num;

		if (num == 0)
			break;
		else
		{
			counter++;
			sum += num;
			if (num > max)
				max = num;
			if (num < min)
				max = min;
		}
			
	}
	average = sum / counter;

	cout << "SUM:" << sum << endl << "AVERAGE:" << average << endl << "MAX:" << max << endl << "MIN:" << min << endl;
	cout << "NUMBER OF ELEMENTS:" << counter << endl;
}

