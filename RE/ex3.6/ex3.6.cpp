
#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>   

using namespace std;

//leap_year -- true | not leap_year -- false
bool isLeap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	else
		return false;
}

int monthDays(int month, int year)
{
	switch (month)
	{
	case 1:
		return 31;
		break;
	case 2:
		if (isLeap(year))
			return 29;
		else
			return 28;
		break;
	case 3:
		return 31;
		break;
	case 4:
		return 30;
		break;
	case 5:
		return 31;
		break;
	case 6:
		return 30;
		break;
	case 7:
		return 31;
		break;
	case 8:
		return 31;
		break;
	case 9:
		return 30;
		break;
	case 10:
		return 31;
		break;
	case 11:
		return 30;
		break;
	case 12:
		return 31;
		break;

	default:
		break;
	}
}

int weekDay(int day, int month, int year) {

	int code;

	switch (month)
	{
	case 1:
		if (isLeap(year))
			code = 6;
		else
			code = 0;
		break;
	case 2:
		if (isLeap(year))
			code = 2;
		else
			code = 3;
		break;
	case 3:
		code = 3;
		break;
	case 4:
		code = 6;
		break;
	case 5:
		code = 1;
		break;
	case 6:
		code = 4;
		break;
	case 7:
		code = 6;
		break;
	case 8:
		code = 2;
		break;
	case 9:
		code = 5;
		break;
	case 10:
		code = 0;
		break;
	case 11:
		code = 3;
		break;
	case 12:
		code = 5;
		break;

	default:
		break;
	}

	int digitsYear = 0;
	int yearCopy = year;
	do {
		digitsYear++;
		yearCopy /= 10;
	} while (yearCopy > 0);

	
	int s = floor(year / pow(10, digitsYear - 2));
	int a = year % 10 + ((year/10) % 10) * pow(10, 1);

	return ((int)floor((5 * a) / 4) + code + day - 2 * (s % 4) + 7) % 7;
}

string monthPT(int month)
{
	switch (month)
	{
	case 1:
		return "Janeiro";
		break;
	case 2:
		return "Fevereiro";
		break;
	case 3:
		return "Marco";
		break;
	case 4:
		return "Abril";
		break;
	case 5:
		return "Maio";
		break;
	case 6:
		return "Junho";
		break;
	case 7:
		return "Julho";
		break;
	case 8:
		return "Agosto";
		break;
	case 9:
		return "Setembro";
		break;
	case 10:
		return "Outubro";
		break;
	case 11:
		return "Novembro";
		break;
	case 12:
		return "Dezembro";
		break;

	default:
		break;
	}
}

void printYearCalendar(int year) {
	
	cout << "CALENDARIO ANO " << year << endl << "--------------------" << endl;

	for (int month=1; month <= 12; month++)
	{
		cout << monthPT(month) << '/' << year << endl;
		cout << "Dom" << '\t' << "Seg " << '\t' << "Ter" << '\t' << "Qua" << '\t' << "Qui" << '\t' << "Sex" << '\t' << "Sab" << endl;

		int first_position = weekDay(1,month, year);
		
		if (first_position == 0)
			first_position = 7;

		for (int i = 1; i < first_position; i++)
		{
				cout << " " << "\t";
		}
		for (int day = 1; day <= monthDays(month, year); day++)
		{
			int position = weekDay(day, month, year);
			if (day < 10)
				cout << " ";

			if (position != 0)
			{
					cout << day << "\t";
			}
			else
				cout << day << endl;
		}

		cout << endl << endl << endl;

	}
	
	



}

int main()
{
	printYearCalendar(1967);
}


