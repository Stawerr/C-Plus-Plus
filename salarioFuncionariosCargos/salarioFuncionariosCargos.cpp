#include <iostream>
using namespace std;

int main()
{
	double salario;
	double nsalario;
	int cargo;

	cout << "101-Gerente 102-Engenheiro 103-Tecnico" << "\n";
	cin >> cargo;

	cout << "Introduza o seu salário" << "\n";
	cin >> salario;

	switch (cargo) {
	case 101:
		nsalario = salario * 1.25;
		break;
	case 102:
		nsalario = salario * 1.20;
		break;
	case 103:
		nsalario = salario * 1.15;
		break;
	default:
		nsalario = salario * 1.10;
	}
	cout << "Salario antigo: " << salario << "\n"<< "Novo salário: " << nsalario<< "\n" << "Diferenca: "<< nsalario-salario;
}
