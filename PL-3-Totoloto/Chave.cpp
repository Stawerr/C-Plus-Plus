#include <iostream>
#include "Chave.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

void Chave::gerarChaveAleatoria(int* ch) {
	//random numero
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		ch[i] = rand() % 49 + 1;
	}
	// validar e substituir repetidos
	for (int i = 0; i < 6; i++) {
		for (int j = i + 1; j < 6-1; j++) {
			if (ch[i] == ch[j])
				ch[i] = rand() % 49 + 1;
		}
	}
}
void Chave::lerChave(int* ch) {
	for (int i = 0; i < 6; i++) {
		cout << "Introduza um valor na posição "<<i<<"\n";
		cin >> ch[i];
		if (ch[i] < 1 || ch[i]>49) {
			do {
				cout << "Introduza um valor na posição " << i << "\n";
				cin >> ch[i];
			} while (ch[i] < 1 || ch[i]>49);
		}
	}
}
void Chave::imprimirChave(int n, int* ch) {
	for (int i = 0; i < 6; i++) {
		cout <<"["<< ch[i]<<"]";
	}
}
int Chave::verifPremio(int* ch1, int* ch2) {
	int cont = 0;

	//compara os 2 vetores
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (ch1[i] == ch2[j]) {
				cont++;
			}
		}
	}

	if (cont == 6) {
		return 1;
	}
	else if (cont == 5) {
		return 2;
	}
	else if (cont == 4) {
		return 3;
	}
	else if (cont == 3) {
		return 4;
	}
	else if (cont == 2) {
		return 5;
	}
	else if (cont == 1) {
		return 6;
	}
	else {
		return 0;
	}
}
void Chave::ordenaChave(int* ch) {
	int aux = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6 - 1; j++) {
			if (ch[i] < ch[j]) {
				aux = ch[i];
				ch[i] = ch[j];
				ch[j] = aux;
			}
		}
	}
}
int Chave::pesquisaChave(int* ch1) {
	int cont = 0;
	int pesq = 0;
	cout << "Introduza o numero a pesquisar " << "\n";
	cin >> pesq;
	for (int i = 0; i < 6; i++) {
		if (pesq==ch1[i]) {
			cont++;
		}
	}
	return cont;
}