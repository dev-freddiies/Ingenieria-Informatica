//============================================================================
// Name        : conversion_euros.cpp
// Author      : Alfredo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	float euros;
	float dolares;

	cout << "Introduce el numero de euros que quieres convertir a dolares" << endl;
	cin >> euros;

	dolares = euros * 1.20;

	cout << "Los: " << euros << " € que querias convertir a dolares ahora son: " << dolares << " $" << endl;


	return 0;
}
