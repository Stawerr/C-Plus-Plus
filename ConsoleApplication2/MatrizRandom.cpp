#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int linhas, colunas;
	cout << "Quantas linhas tem a  matriz?" << "\n";
	cin >> linhas;
	cout << "Quantas colunas tem a  matriz?" << "\n";
	cin >> colunas;

	//Inicializar a Matriz

	int** mat = new int* [linhas];

	for (int i = 0; i < linhas; i++) {
		mat[i] = new int[colunas];
	}

	// Introduzir valores random na Matriz

	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			mat[i][j] = rand() % 10 + 1;
		}
	}

	//Escrever a Matriz

	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			cout << mat[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}