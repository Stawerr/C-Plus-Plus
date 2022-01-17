/* Um banco concede um crédito especial aos seus clientes, variável com o saldo médio no último ano.
Construa um algoritmo que leia o saldo médio de um cliente e calcule o valor máximo de crédito de acordo com a tabela abaixo.
Mostre uma mensagem para informar o saldo médio e o valor do crédito.
Abaixo de 200 – nenhum crédito
de 201 a 400 – até 20 % do valor do saldo médio
de 401 a 600 – até 30 % do valor do saldo médio
Acima de 600 – até 40 % do valor do saldo médio */

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

	cout << "Introduza o saldo médio"<<"\n";
	cin >> saldomedio;


	double creditomain = credito(saldomedio);

	cout << creditomain;

}

