
#include "pch.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

bool isHydroxideC(char compound[])
{
	int i = strlen(compound) - 2;

	if (compound[i] == 'O' && compound[i+1] == 'H')
	{
		return true;
	}
		
	else
		return false;
}

bool isHydroxideCpp(string compound1) {

	int i = compound1.length() -  2; 

	if (compound1[i] == 'O' && compound1[i + 1] == 'H')
	{
		return true;
	}

	else
		return false;

	return true;
}
int main()
{
	char str[];
	string ola = "Ola, " + str;
	cin >> str;
	cout << ola;

	//cout << isHydroxideCpp("kOH");

	
}