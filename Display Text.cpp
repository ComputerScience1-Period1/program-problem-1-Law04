/*
Christopher Harstfield - 22 spetember 2017 1
Assignment Name : Display Text
Introduction into C++ IDE Visual Studios
Create New Project & Display Text to Console
*/

// Libraries
#include <iostream>
#include <conio.h> 

// Namespaces
using namespace std;

// Functions()
void pause() {
	cout << "Christopher Hartsfield CompSci 1";
	while (!_kbhit());
	_getch();
	cout << "\n";
}

// MAIN
void main() {
	// Display Text 
	cout << "Hello World!" << endl;
	pause();
	// no system(""); commands anymore
}