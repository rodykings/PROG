#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

bool sequenceSearch(string s, int nc, char c)
{
	int counter = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (nc == counter)
			return true;
		else {
			if (s[i] == c)
				counter += 1;
			else
				counter = 0;
		}
	}
	return false;
}

int main()
{
	cout << sequenceSearch("olaaai", 4, 'a');
	return 0;
}
