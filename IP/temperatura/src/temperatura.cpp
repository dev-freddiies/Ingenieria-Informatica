//============================================================================
// Name        : temperatura.cpp
// Author      : Alfredo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

	//F= 9/5 C+32

#include <iostream>
using namespace std;

int main() {

	float celsius;
	float far;

	cout << "Introduce la temperatura en Celsius (ºC) que quieres convertir a Fahrenheit (ºF)" << endl;
	cin >> celsius;

	far = (celsius*9/5)+32;

	cout << "Los: " << celsius << " ºC que querias convertir a Fahrenheit ahora son: " << far << " ºF" << endl;


	return 0;
}
