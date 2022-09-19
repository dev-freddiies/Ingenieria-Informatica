//============================================================================
// Name        : circunferencia.cpp
// Author      : Profesores de IP/FP
// Version     : 0.0
// Description : Cálculo de longitud y área de una circunferencia
//============================================================================

#include <iostream>
using namespace std;


int main() {
	const float PI = 3.1416;

	float  radio;
	float  longitud;
	float diametro;

	/*
	cout << "¿Radio? " << endl;
	cin >> radio;
	*/

	cout << "¿Diametro? " << endl;
	cin >> diametro;

	radio = diametro/2;
	cout << "Radio = Diametro: " << diametro << " /2 = " << radio << endl;

	longitud = 2 * PI * radio;

	cout <<"Longitud: " << longitud << endl;
	cout <<"Área: "<< PI*radio*radio <<endl;


	return 0;
}
