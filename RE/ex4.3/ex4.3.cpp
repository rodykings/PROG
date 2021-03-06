
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


void decompose(string compound) {

	string str;

	bool back = true;

	for (int i = 0; i < compound.length(); i++)
	{
		if (isupper(compound[i]))
		{
			if (i == compound.length() - 1)
			{
				str.push_back(compound[i]);
				str += "\n";
			}
			else if (isupper(compound[i + 1]) || isdigit(compound[i + 1]) && i + 1 < compound.length()) {
				str.push_back(compound[i]);
				str += "\n";
			}
		}
		else if (islower(compound[i]))
		{
			str.push_back(compound[i - 1]);
			str.push_back(compound[i]);
			str += "\n";
		}
		else if (isdigit(compound[i])) {
			continue;
		}
		else
			continue;
	}
	cout << str;
}

int main()
{
	decompose("C9H8O4");
	return 0;
}

