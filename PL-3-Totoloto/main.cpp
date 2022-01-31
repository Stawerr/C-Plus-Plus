#include <iostream>
#include "Chave.h"
using namespace std;

	int main() {

		setlocale(LC_ALL, ("portuguese"));

		int* chAle = new int[6];
		Chave::gerarChaveAleatoria(chAle);

		int* chUs = new int[6];
		Chave::lerChave(chUs);

		int c = Chave::pesquisaChave(chUs);
		cout<<"O n�mero que procura apareceu " << c<< " vez!" <<"\n";

		Chave::ordenaChave(chUs);
		Chave::ordenaChave(chAle);

		Chave::imprimirChave(6, chUs);
		cout << "\n";
		Chave::imprimirChave(6, chAle);
		cout << "\n";

		int valid = Chave::verifPremio(chAle, chUs);
		switch (valid) {
		case 1:
				cout << "Acertou 6 n�meros";
			break;
		case 2:
			cout << "Acertou 5 n�meros ";
			break;
		case 3:
			cout << "Acertou 4 n�meros ";
			break;
		case 4:
			cout << "Acertou 3 n�meros ";
			break;
		case 5:
			cout << "Acertou 2 n�meros ";
			break;
		case 6:
			cout << "Acertou 1 n�meros ";
			break;
		case 0:
			cout << "N�o acertou qualquer n�mero";
			break;
		}
	}