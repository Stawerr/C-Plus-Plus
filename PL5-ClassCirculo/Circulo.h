#pragma once
using namespace std;

class Circulo {
	private:
		static double area(double raio);
		static double diametro(double raio);
		static double circunferencia( double raio);

	public:
		static double imprimirDistancia(int x1, int y1,int x2, int y2);
		static double somaCircunferencia(double raio1, double raio2);
		static double areaMaior(double raio1, double raio2);
};