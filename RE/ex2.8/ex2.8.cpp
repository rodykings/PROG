#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double n, q, j;
	double final_amount;

	cout << "NUMERO DE ANOS:";
	cin >> n;
	cout << "QUANTIA:";
	cin >> q;
	cout << "TAXA DE JURO ANUAL:";
	cin >> j;
	cout << endl << endl;

	final_amount = q * pow((1 + (j / 100)), n);

	cout << "QUANTIA A LEVANTAR AO FIM DE  " << n << "ANOS: " << fixed << setprecision(2) << final_amount;



}

