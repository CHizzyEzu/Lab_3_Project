// Lab_3_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Junior Ezuma-Ngwu The purpose of this lab is for the computer to greet you upon inputting your name

// Header Files

#include <iostream>
#include <string>
using namespace std; 

int main()
{
// Declaring a string variable for my name

	string yourname;

// Reads full name and skips whitespace
	
	cout << "Enter your first name:  ";
	cin >> std::ws >> yourname; 

// Computer Output

	cout << "Hello, " << yourname << "  It is nice to meet you!  " << std::endl;
}

