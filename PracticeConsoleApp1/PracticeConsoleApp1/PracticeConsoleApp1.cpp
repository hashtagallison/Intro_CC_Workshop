// PracticeConsoleApp1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//hashtagallison 09/07/2019
	//These are my notes from a C++ tutorial that may be found at https://www.sololearn.com/Play/CPlusPlus/

	//	cout prints the line 
	// "\n" is a newline break that is defined within the string (called an escape character)
    cout << "Hello World!\n\n";

	//endl is a line break outside of the string
	cout << "This " << "is " << "awesome!" << endl << endl;

	cout << "Hello \n world! \n I \n love \n programming! \n\n";

	//this is a single line comment, you can also use this to block out text.

	/*
		This is a multi-line comment
		You can use this for header documentation or large blocks of text, etc.
	*/

	int myVariable1 = 10;
	cout << myVariable1 << endl << endl << endl;

	//define two variables at once that are int type
	int a, b;

	cout << "Enter the first number to sum and press enter:\n";
	cin >> a;
	cout << "Enter the second number to sum and press enter:\n";
	cin >> b;

	int sum = a + b;
	
	cout << "\n\n" << a << endl << "+ \n" << b << "\n---\n";
	cout << sum << endl << endl << endl;









	//return ends the function
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
