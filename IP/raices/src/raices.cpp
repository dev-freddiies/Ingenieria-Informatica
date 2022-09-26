//============================================================================
// Name        : raices.cpp
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

// PRE = {a, b, c son los coeficientes de una ecuación de
//		  segundo grado con dos raíces reales}
// POST = {devuelve (-b+raiz(b^2-4ac))/(2a)}
float raizMas (float a, float b, float c) {
	//TODO

	float ecuacionSegundoGradoMas;

	ecuacionSegundoGradoMas = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);

	return ecuacionSegundoGradoMas;
}

// PRE = {a, b, c son los coeficientes de una ecuación de
//		  segundo grado con dos raíces reales}
// POST = {devuelve (-b-raiz(b^2-4ac))/(2a)}
float raizMenos (float a, float b, float c) {
	//TODO

	float ecuacionSegundoGradoMenos;

	ecuacionSegundoGradoMenos = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);

	return ecuacionSegundoGradoMenos;
}


// Módulos de pruebas supervisados. Hay que comprobar que el valor calculado
// coincide con el valor esperado

void pruebas_raizMas () {
	cout << "raizMas: Inicio de pruebas"<<endl;
	cout << "Si a es 4.5, b es 3 y c es -2, el resultado debe ser 0.412023 y la función da "<<raizMas(4.5, 3, -2)<<endl;
	cout << "Si a es 2, b es 3.5 y c es 1.1, el resultado debe ser -0.410646 y la función da "<<raizMas(2, 3.5, 1.1)<<endl;
	cout << "Si a es -2, b es -3 y c es -0.5, el resultado debe ser -1.30902 y la función da "<<raizMas(-2, -3, -0.5)<<endl;
	cout << "Si a es 2, b es 4.0 y c es 2.0, el resultado debe ser -1 y la función da "<<raizMas(2, 4.0, 2.0)<<endl;
	cout << "raizMas: Fin de pruebas"<<endl;
}

void pruebas_raizMenos () {
	cout << "raizMenos: Inicio de pruebas"<<endl;
	cout << "Si a es 4.5, b es 3 y c es -2, el resultado debe ser -1.07869 y la función da "<<raizMenos(4.5, 3, -2)<<endl;
	cout << "Si a es 2, b es 3.5 y c es 1.1, el resultado debe ser -1.33935 y la función da "<<raizMenos(2, 3.5, 1.1)<<endl;
	cout << "Si a es -2, b es -3 y c es -0.5, el resultado debe ser -0.190983 y la función da "<<raizMenos(-2, -3, -0.5)<<endl;
	cout << "Si a es 2, b es 4.0 y c es 2.0, el resultado debe ser -1 y la función da "<<raizMenos(2, 4.0, 2.0)<<endl;
	cout << "raizMenos: Fin de pruebas"<<endl;
}

void pruebas () {
	pruebas_raizMas();
	pruebas_raizMenos();
}

// Programa normal, que pide los valores de los coeficientes a, b y c y muestra
// las dos raíces

void programa (){

	float a;
	float b;
	float c;
	float x1;
	float x2;
	cout << "" <<endl;
	cout << "Para la ecuación de segundo grado ax² + bx + c = 0" <<endl;
	cout << "" <<endl;
	cout << "Introduce el coeficiente a:" <<endl;
	cin >> a;
	cout << "Introduce el coeficiente b:" <<endl;
	cin >> b;
	cout << "Introduce el coeficiente c:" <<endl;
	cin >> c;
	cout << "" <<endl;
	x1 = raizMas   (a, b, c);
	x2 = raizMenos (a, b, c);
	cout << "Raíz 1: " << x1 << endl;
	cout << "Raíz 2: " << x2 << endl;
}

int main() {
	pruebas();
	programa();

	return 0;
}
