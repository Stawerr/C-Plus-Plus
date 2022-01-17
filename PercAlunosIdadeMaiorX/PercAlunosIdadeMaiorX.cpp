#include <iostream>
using namespace std;

int main()
{
	int n;
	int idadedef;
	int cont = 0;

	cout << "Introduza o numero de alunos: " << "\n";
	cin >> n;

	cout << "Introduza a idade definida: " << "\n";
	cin >> idadedef;

	int* vec = new int [n];

	for (int i = 0; i < n; i++){
		cout << "Introduza a idade do aluno: " << i+1 << "\n";
		cin >> vec[i];
		if (vec[i] > idadedef) {
			cont = cont + 1;
		}
	}
	cout<<"A percentagem de alunos e " << (cont *100)/n<<"%";
}