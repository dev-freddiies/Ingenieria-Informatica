//============================================================================
// Name        : bufete.cpp
// Author      : Alfredo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int precio(int horas, int minutos){

	int precioHoras;
	int precioMinutos;
	int precioTotal;

	precioHoras = horas * 240;

	if (minutos<15){

		//cout << "Los minutos son inferiores a 15 min" << endl;
		precioMinutos = 0;

	} else {

		precioMinutos =  minutos/15 * 60;

	}

	precioTotal = precioHoras + precioMinutos;

	return precioTotal;

}

void pruebas () {

	cout << "precio: Inicio de pruebas"<<endl;

	cout << "Si las horas son 1 y los minutos 14, el resultado debe ser 240: "<<precio(1, 14)<<endl;
	cout << "Si las horas son 1 y los minutos 15, el resultado debe ser 300: "<<precio(1, 15)<<endl;
	cout << "Si las horas son 0 y los minutos 0, el resultado debe ser 0: "<<precio(0, 0)<<endl;
	cout << "Si las horas son 0 y los minutos 59, el resultado debe ser 180: "<<precio(0, 59)<<endl;
}

void programa (){

	int total;
	int horas;
	int minutos;

	cout << "Introduce las horas: " << endl;
	cin >> horas;

	cout << "Introduce los minutos: " << endl;
	cin >> minutos;

	total = precio(horas, minutos);

	cout << "Total: " << total << " €" << endl;

}

int main() {

	//pruebas();
	programa();
	return 0;
}
