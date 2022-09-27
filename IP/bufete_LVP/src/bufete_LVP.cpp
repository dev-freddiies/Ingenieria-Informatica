//============================================================================
// Name        : bufete_LVP.cpp
// Author      : Alfredo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int horas;
	int minutos;
	int total;

	cin >> horas;

	cin >> minutos;

	total = (horas * 240) + (minutos/15 * 60);

	cout << total << endl;


}


