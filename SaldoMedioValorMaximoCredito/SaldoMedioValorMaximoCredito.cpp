/* Um banco concede um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano.
Construa um algoritmo que leia o saldo m�dio de um cliente e calcule o valor m�ximo de cr�dito de acordo com a tabela abaixo.
Mostre uma mensagem para informar o saldo m�dio e o valor do cr�dito.
Abaixo de 200 � nenhum cr�dito
de 201 a 400 � at� 20 % do valor do saldo m�dio
de 401 a 600 � at� 30 % do valor do saldo m�dio
Acima de 600 � at� 40 % do valor do saldo m�dio */

#include <iostream>
using namespace std;

double credito(double saldo) {

	if (saldo < 200){
		saldo = saldo;
	}
	else if (saldo <=400) {
		saldo = saldo*1.2;
	}
	 else if (saldo <= 600) {
		saldo = saldo * 1.3;
	}
	 else  {
		saldo = saldo * 1.4;
	}
	return saldo;
}
int main()
{
	double saldomedio;

	cout << "Introduza o saldo m�dio"<<"\n";
	cin >> saldomedio;


	double creditomain = credito(saldomedio);

	cout << creditomain;

}

