// Pyramid - Right to Left.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; ++i) // rows 0,1,2,3,4
	{
		for (int s = i; s < 4; ++s) // column
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; ++j) // starts
		{
			cout << " *";
		}

		cout << "\n";
	}


    return 0;
}

