//============================================================================
// Name        : minutos.cpp
// Author      : Alfredo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <iostream>
using namespace std;

int main() {

	float horas;
	float min;
	float seg;

	cout << "Introduce una cantidad de minutos: " << endl;
	cin >> min;

	horas = min / 60;
	seg = min * 60;

	cout << "Los: " << min << " en horas son: " << horas << " horas" << " y en segundos: " << seg << " segundos" << endl;


	return 0;
}
