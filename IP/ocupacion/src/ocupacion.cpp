//============================================================================
// Name        : ocupacion.cpp
// Author      : Alfredo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int ocupacion(int numEstudiantes, int porcentajeEstudiantes, int plazasTotales){

	int total;

	total = numEstudiantes - plazasTotales;
	//porcentaje = ;

	if (total < 0){

		cout << "Faltan: " << -total << " plazas" <<endl;

	} else {

		cout << "Faltan: " << total << " alumnos" <<endl;
	}

	return total;

}

void pruebas () {

	cout << "precio: Inicio de pruebas"<<endl;

	cout << "Si los estudiantes son 100 y las plazas son 130: "<< ocupacion(100, 100, 130)<<endl;

}

void programa (){

	int numEstudiantes;
	int porcentajeEstudiantes;
	int plazasTotales;

	int totalPlazas;


	cout << "Introduce las plazas: " << endl;
	cin >> plazasTotales;

	cout << "Introduce el porcentaje: " << endl;
	cin >> porcentajeEstudiantes;

	cout << "Introduce el numero de estudiantes: " << endl;
	cin >> numEstudiantes;

	totalPlazas = ocupacion(plazasTotales, porcentajeEstudiantes, numEstudiantes);


}

int main() {

	//pruebas();
	programa();
	return 0;
}
