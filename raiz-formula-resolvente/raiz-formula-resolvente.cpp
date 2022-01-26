#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
void calcFR(int a, int b, int c, float* x1, float* x2)
{
	if (a == 0 || pow(b, 2) - 4 * a * c < 0) {
		*x1 = 0;
		*x1 = 0;
	}
	else {
		*x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
		*x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
	}
}
int main()
{
	setlocale(LC_ALL, "portuguese");
	int a=0, b=0, c=0;
	float raiz1=0, raiz2=0;

	cout << "Introduza o valor de A"<<"\n";
	cin >> a;
	cout << "Introduza o valor de B" << "\n";
	cin >> b;
	cout << "Introduza o valor de C" << "\n";
	cin >> c;

	calcFR(a, b, c, &raiz1, &raiz2);
	cout << "X1:"<< raiz1<<"\n";
	cout << "X2: "<< raiz2<< "\n";
}