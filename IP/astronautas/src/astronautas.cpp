//============================================================================
// Name        : astronautas.cpp
// Author      : Alfredo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int toneladasNave;
	int toneladasFunciona;
	int toneladasPersona;
	int total;

	cin >> toneladasNave;
	cin >> toneladasFunciona;
	cin >> toneladasPersona;

	total = (toneladasNave - toneladasFunciona)/toneladasPersona;

	cout << "Total: " << total << endl;

	return 0;
}
