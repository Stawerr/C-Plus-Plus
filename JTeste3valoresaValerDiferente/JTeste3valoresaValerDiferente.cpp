#include <iostream>
using namespace std;

int main()
{
	double notaEscrito;
	double notaOral;

	cout << "Introduza o valor da nota escrita" << "\n";
	cin >> notaEscrito;
	cout << "Introduza o valor da nota oral" << "\n";
	cin >> notaOral;

	if ((notaEscrito * 0.7 + notaEscrito * 0.3) >=10) {
		cout << "Aprovado";
	}
	else {
		cout << "Reprovado";
	}
 

}
