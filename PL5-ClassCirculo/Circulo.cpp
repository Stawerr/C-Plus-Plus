#include <iostream>
#include "Circulo.h"


using namespace std;

double Circulo::area(double raio) {
	double area = 0;
	area = 3.14 * (raio * raio);
	return area;
}
double Circulo::diametro(double raio) {
	double diametro = raio + raio;
	return diametro;
}
double Circulo::circunferencia(double raio) {
	double circunferencia = 0;
	circunferencia = (2*3, 14) * raio;
	return circunferencia;
}
double Circulo::somaCircunferencia(double raio1, double raio2) {
	double var=0;
	var= Circulo::circunferencia(raio1) + Circulo::circunferencia(raio2);
	return var;
}
double Circulo::areaMaior(double raio1, double raio2) {
	double var = 0;
	if (Circulo::area(raio1) > Circulo::area(raio2)) {
		var=0;
	}
	else
	{
		var = 1;
	}
	return var;
}
double Circulo::imprimirDistancia(int x1, int y1, int x2, int y2){
	int catx = 0;
	int caty = 0;
	double h = 0;

	catx = abs(x2 - x1);
	caty = abs(y2 - y1);

	h = double(sqrt(pow(catx, 2) + pow(caty, 2)));
	return h;
}