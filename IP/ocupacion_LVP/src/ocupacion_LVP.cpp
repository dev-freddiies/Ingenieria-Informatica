//============================================================================
// Name        : ocupacion_LVP.cpp
// Author      : Alfredo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//100 60 53 = 7

int main() {

	int numPlazas;
	int porcentajeOcupacion;
	int numEstudiantes;
	int porcentaje;
	int total;

	cin >> numPlazas;
	cin >> porcentajeOcupacion;
	cin >> numEstudiantes;

	porcentaje = (numPlazas * porcentajeOcupacion)/100;

	total = porcentaje - numEstudiantes;

	cout << total << endl;


}
